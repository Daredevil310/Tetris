#ifndef PIECES_H                // prevent multiple inclusions of this header file
#define PIECES_H                // mark this header file as included

class Pieces {                  // declare the pieces class

public:

    int GetBlockType(int pieceIndex , int rotationIndex , int x , int y);
    int GetXInitialPosition(int pieceIndex , int rotationIndex);
    int GetYInitialPosition(int pieceIndex , int rotationIndex);

private:

    
};                              // end of Pieces class definition

#endif                          // end of pieces_h include guard
