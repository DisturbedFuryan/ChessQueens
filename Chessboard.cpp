#include <iostream>
#include "Chessboard.hpp"

using namespace std;

CChessboard::CChessboard(const unsigned n) : m_n(n) {
    m_fields = new bool*[n];
    for (unsigned u = 0; u < n; ++u)
        m_fields[u] = new bool[n];
}

CChessboard::~CChessboard() {
    for (unsigned u = 0; u < m_n; ++u)
        delete [] m_fields[u];
    delete [] m_fields;
}

void CChessboard::show() const {
    for (unsigned u = 0; u < m_n; ++u) {
        for (unsigned v = 0; v < m_n; ++v)
            cout << m_fields[u][v] << ' ';
        cout << endl;
    }
}
