CC=g++
CFLAGS=-c -std=c++0x -Wall


all: ChessQueens

ChessQueens: main.o Chessboard.o
	$(CC) main.o Chessboard.o -o ChessQueens

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Chessboard.o: Chessboard.cpp
	$(CC) $(CFLAGS) Chessboard.cpp

clean:
	rm -rf *.o ChessQueens
