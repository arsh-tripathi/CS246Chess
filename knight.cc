#include "knight.h"
#include "enums.h"
#include "piece.h"
#include <vector>

using namespace std;

static const vector<Coord> ALLMOVES{Coord{2, 1},  Coord{2, -1},  Coord{1, 2},   Coord{1, -2},
                                    Coord{-1, 2}, Coord{-1, -2}, Coord{-2, -1}, Coord{-2, 1}};

Knight::Knight(Coord pos, Colour colour) : Piece{pos, colour}
{
}

Knight::~Knight()
{
}

PieceType Knight::getPieceType()
{
    return PieceType::Knight;
}

vector<Coord> Knight::possibleMoves()
{
    vector<Coord> moves;
    for (int i = 0; i < ALLMOVES.size(); ++i)
    {
        Coord c = pos + ALLMOVES[i];
        if (c.checkBounds())
        {
            moves.emplace_back(c);
        }
    }
    return moves;
}

bool Knight::isMovePossible(Coord &c)
{
    if (!c.checkBounds())
    {
        // final destination is out of bouinds
        return false;
    }
    Coord difference = pos - c;
    for (int i = 0; i < ALLMOVES.size(); ++i)
    {
        if (difference == ALLMOVES[i])
        {
            return true;
        }
    }
    return false;
}