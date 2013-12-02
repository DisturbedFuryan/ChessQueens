#include "Chessboard.hpp"

CChessboard::CChessboard(int n) : m_n(n) {
    m_fields = new bool*[n];
    for (unsigned u = 0; u < n; ++u)
        m_fields[u] = new bool[n];
}

CChessboard::~CChessboard() {
    for (unsigned u = 0; u < n; ++u)
        delete [] m_fields[u];
    delete [] m_fields;
}

void CChessboard::show() const {
    for (unsigned u = 0; u < n; ++u) {
        for (unsigned v = 0; v < n; ++v)
            cout << m_fields[u][v] << ' ';
        cout << endl;
    }
}
