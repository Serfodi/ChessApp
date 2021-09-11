//
//  Array2D.hpp
//  ChessApp
//
//  Created by Сергей Насыбуллин on 27.08.2021.
//

#ifndef Array2D_hpp
#define Array2D_hpp

#include <stdio.h>

/**
 Шаблон матрицы
 */
template <typename T>
class Array2D {
    
private:
    int columns;
    int rows;
    
    T array2D;
    
public:
    // init
    Array2D(int columns, int rows) : columns(columns), rows(rows) {
        
    }
    
    void creatArray2D() {
        array2D = T[(columns * rows)];
    }
    
    
    // subscript
    T get(int column, int row) {
        return array2D[row * columns + column];
    }
    void set(int column, int row, T newValue) {
        array2D[row * columns + column] = newValue;
    }
    
};



#endif /* Array2D_hpp */
