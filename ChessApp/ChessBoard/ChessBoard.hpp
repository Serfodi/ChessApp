//
//  ChessBoard.hpp
//  ChessApp
//
//  Created by Сергей Насыбуллин on 27.08.2021.
//

#ifndef ChessBoard_hpp
#define ChessBoard_hpp

#include <stdio.h>

#include "ChessFigure.hpp"
#include "Array2D.hpp"
#include "Level.hpp"


/**
 Класс отвечающий за действия в игре. Принимает columns:int , row:int
 */
class ChessBoard {
    
    // MARK: Свойства класса
public:
    int columns;
    int rows;
    
//    ChessFigure one;
    
private:
    Array2D<ChessFigure > board { 0, 0 };
//    ChessFigura figureSave;
    
    
public:
    // MARK: init
    ChessBoard(int columns, int rows) : columns(columns), rows(rows) {
        board = Array2D<ChessFigure >(columns, rows);
    }
    
    
    // MARK: Методы класса
    /**
     Это функция расстановки фигур.
     */
    void arrangeFigure(Level level) { }
    
    /**
     Это функция выбора фигуры.
     */
    int selectFigure() {
        // (координаты)
        // выбор фигуры их массива
        // возращяет False если фигура по переданным координатм отсутсвтует
        // запоминает фигуру в figure
        return 0;
    };
    
    /**
     Это функция перемещения фигуры.
     */
    int moveFigure() {
        // (координаты)
        // перемещения на новые координаты
        return 0;
    };
    
    /**
     Это функция конца игры.
     */
    int endGame () {
        return 0;
    };
    
    
};


#endif /* ChessBoard_hpp */
