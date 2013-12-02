#include <iostream>
#include "Chessboard.hpp"
#include "Vector.hpp"

using namespace std;

CChessboard::CChessboard(const int n) : m_n(n) {
    // Create a new array to represent the chessboard.
    m_fields = new bool*[n];
    for (int i = 0; i < n; ++i)
        m_fields[i] = new bool[n];

    // Fill the array.
    for (int i = 0; i < m_n; ++i)
        for (int j = 0; j < m_n; ++j)
            m_fields[i][j] = false;
}

CChessboard::~CChessboard() {
    // Remove the array from memory.
    for (int i = 0; i < m_n; ++i)
        delete [] m_fields[i];
    delete [] m_fields;
}

void CChessboard::show() const {
    for (int i = 0; i < m_n; ++i) {
        for (int j = 0; j < m_n; ++j)
            cout << m_fields[i][j] << ' ';
        cout << endl;
    }
}

bool CChessboard::fieldIsFree(const CVector<int> pos) const {
    // Check out the field and let's go...
    if (m_fields[pos.y][pos.x]) return false;

    // ...to the west.
    for (int i = (pos.x - 1); i > -1; --i)
        if (m_fields[pos.y][i]) return false;

    // ...to the east.
    for (int i = (pos.x + 1); i < m_n; ++i)
        if (m_fields[pos.y][i]) return false;
    
    // ...to the north.
    for (int i = (pos.y - 1); i > -1; --i)
        if (m_fields[i][pos.x]) return false;

    // ...to the south.
    for (int i = (pos.y + 1); i < m_n; ++i)
        if (m_fields[i][pos.x]) return false;

    CVector<int> checkpoint;

    // ...to the northwest.
    checkpoint.set((pos.x - 1), (pos.y - 1));
    while ((checkpoint.x > - 1) && (checkpoint.y > -1)) {
        if (m_fields[checkpoint.y][checkpoint.x]) return false;
        --checkpoint.x; --checkpoint.y;
    }

    // ...to the southwest.
    checkpoint.set((pos.x + 1), (pos.y + 1));
    while ((checkpoint.x < m_n) && (checkpoint.y < m_n)) {
        if (m_fields[checkpoint.y][checkpoint.x]) return false;
        ++checkpoint.x; ++checkpoint.y;
    }

    // ...to the northeast.
    checkpoint.set((pos.x + 1), (pos.y - 1));
    while ((checkpoint.x < m_n) && (checkpoint.y > -1)) {
        if (m_fields[checkpoint.y][checkpoint.x]) return false;
        ++checkpoint.x; --checkpoint.y;
    }

    // ...to the southeast.
    checkpoint.set((pos.x - 1), (pos.y + 1));
    while ((checkpoint.x > -1) && (checkpoint.y < m_n)) {
        if (m_fields[checkpoint.y][checkpoint.x]) return false;
        --checkpoint.x; ++checkpoint.y;
    }

    return true;
}
