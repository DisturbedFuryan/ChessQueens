#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

//==================================================================================================
class CChessboard {
public:
    CChessboard(unsigned n);
    ~CChessboard();

    void show() const;

private:
    const unsigned m_n;

    bool** m_fields;
};
//==================================================================================================

#endif
