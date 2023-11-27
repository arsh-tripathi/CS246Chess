#ifndef __BISHOP_H__
#define __BISHOP_H__

#include "enums.h"
#include "piece.h"
#include <vector>

class Bishop : public Piece
{

  public:
    // ctor/dtor
    Bishop(Coord pos, Colour colour);
    ~Bishop();

    // methods
    PieceType getPieceType() override;
    std::vector<Coord> possibleMoves() override;
    bool isMovePossible(Coord &c) override;
};

#endif