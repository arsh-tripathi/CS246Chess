#ifndef __KNIGHT_H__
#define __KNIGHT_H__

#include "enums.h"
#include "piece.h"
#include <vector>

class Knight : public Piece
{

  public:
    // ctor and dtor
    Knight(Coord pos, Colour colour);
    ~Knight();

    // methods
    PieceType getPieceType() override;
    std::vector<std::vector<Coord>> possibleMoves() override;
    bool isMovePossible(Coord &c) override;
};

#endif
