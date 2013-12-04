#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

template<typename T> class CVector;

//==================================================================================================
class CChessboard {
public:
    /* Creates the chessboard of given size. */
    CChessboard(const int n);

    ~CChessboard();
    
    /* Puts the queen in a given row. */
    void putQueen(int row, int& counter);

    void show() const;

private:
    /* Dimensions of the chessboard. */
    const int m_n;

    /* Array, which is the chessboard.
     * true = the queen
     * false = empty field
     */
    bool** m_fields;

    /* Checks whether the field of a given position is free. */
    bool fieldIsFree(const CVector<int> pos) const;
};
//==================================================================================================

#endif
