#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

//==================================================================================================
class CChessboard {
public:
    CChessboard(unsigned n);

private:
    unsigned m_n;

    bool* m_fields;
};
//==================================================================================================

#endif
