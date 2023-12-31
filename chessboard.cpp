#include "chessboard.h"

ChessboardIterator Chessboard::begin() {
    return ChessboardIterator(*this, 0);
}

ChessboardIterator Chessboard::end() {
    return ChessboardIterator(*this, 64);
}

void Chessboard::print() {
    for (int y = 7; y >= 0; y--) {
        for (int x = 0; x < 8; x++) {
            Color c;
            Piece p;
            get(x, y, c, p);
            cout << "[" << x << ", " << y << "]: ";
            if (c == White) {
                cout << "White ";
            } else {
                cout << "Black ";
            }
            switch (p) {
                case Rook:
                    cout << "Rook";
                    break;
                case Knight:
                    cout << "Knight";
                    break;
                case Bishop:
                    cout << "Bishop";
                    break;
                case Queen:
                    cout << "Queen";
                    break;
                case King:
                    cout << "King";
                    break;
                case Pawn:
                    cout << "Pawn";
                    break;
                default:
                    cout << "Empty";
                    break;
            }
            cout << "\t";
        }
        cout << endl;
    }
}
