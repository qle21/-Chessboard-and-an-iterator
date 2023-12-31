#include <iostream>
#include <iterator>
using namespace std;

// Define separate containers for Color, Piece (enums recommended)

enum Color { White, Black };
enum Piece { Rook, Knight, Bishop, Queen, King, Pawn, Empty };

// A chessboard contains squares
class Square {
private:
    Color color;
    Piece piece;
    bool occupied;

public:
    Square() : color(White), piece(Empty), occupied(false) {}
    Square(Color c, Piece p) : color(c), piece(p), occupied(true) {}

    int get(bool &o, Color &c, Piece &p) {
        o = occupied;
        c = color;
        p = piece;
        return 1;
    }

    void print();
};

class ChessboardIterator;

class Chessboard {
    // Make the container iterator friendly
    typedef ChessboardIterator iterator;

private:
    Square chessboard[8][8];

public:
    friend class ChessboardIterator;

    Chessboard() {} // Square does all the initialization

    // Return an x,y square from chessboard
    Square square(int x, int y) {
        return chessboard[x][y];
    }

    ChessboardIterator begin();
    ChessboardIterator end();

    // Place a piece on an x,y square in the chessboard
    int place(int x, int y, Color c, Piece p);

    int get(int x, int y, Color &c, Piece &p);

    int move(int fromX, int fromY, int toX, int toY);

    void print();
};

class ChessboardIterator {
private:
    int position; // a number in [0..64]
    Chessboard &chessboard;

public:
    ChessboardIterator(Chessboard &board, int pos) : chessboard(board), position(pos) {}

    void xy(int &x, int &y) {
        x = position % 8;
        y = position / 8;
    }

    // Return the square
    Square operator*() {
        int x, y;
        xy(x, y);
        return chessboard.square(x, y);
    }

    // Pre-increment
    ChessboardIterator &operator++() {
        position++;
        return *this;
    }

    // Needed to support foreach
    int operator!=(ChessboardIterator &a) {
        return position != a.position;
    }
};
