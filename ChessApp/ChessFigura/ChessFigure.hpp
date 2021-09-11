//
//  ChessFigurе.hpp
//  ChessApp
//
//  Created by Сергей Насыбуллин on 27.08.2021.
//

#ifndef ChessFigurе_hpp
#define ChessFigurе_hpp

#include <stdio.h>

enum class Color {
    black,
    white
};

enum class Piece {
    pawn,
    queen
};


struct PositionFigure {
    int column;
    int row;
};


/**
 Класс описывающий шахматную фигуру
 */
class ChessFigure  {
    
public:
    // свойства
    Piece piece;
    Color color;
    PositionFigure position;
    
    // init
    ChessFigure (Piece piece, Color color, PositionFigure position) :
    piece(piece), color(color), position(position) { }
    
};

#endif /* ChessFigurе_hpp */
