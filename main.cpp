#include <iostream>
#include "Chessboard.hpp"

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {
    int n;
    
    // Get n from the user.
    cout << "Type n: "; cin >> n; cout << endl;
    
    CChessboard chessboard(n);
    
    int counter = 1;
    
    chessboard.putQueen(0, counter);
    
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
