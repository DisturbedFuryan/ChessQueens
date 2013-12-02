#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

template<typename T> class CVector;

//==================================================================================================
class CChessboard {
public:
    CChessboard(const int n);
    ~CChessboard();

    void show() const;

private:
    const int m_n;

    bool** m_fields;

    bool fieldIsFree(const CVector<int> pos) const;
};
//==================================================================================================

#endif
