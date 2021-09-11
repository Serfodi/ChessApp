//
//  main.cpp
//  ChessApp
//
//  Created by Сергей Насыбуллин on 27.08.2021.
//

#include <iostream>

#include "Array2D.hpp"
#include "ChessFigure.hpp"
#include "ChessBoard.hpp"


// MARK: Обявления функций
void consoleUpdates (Array2D<ChessFigure > *board);
void massage (std::string);


// MARK: main
int main() {
        
    // создания доски
    ChessBoard board { 8, 8 };
    
    return 0;
}


// MARK: Функции

/**
 функци вывода шахмотной доски в консль
 */
void consoleUpdates (Array2D<ChessFigure > *board) {
    
};

/**
 функци вывода текста
 */
void massage (std::string text) {
    std::cout << text << "\n";
};
