#include "core/Tetris.hpp"
#include <assert.h>
#include <iostream>

int main() {
    tetris::Board b(10,22);
    
    tetris::IAction i1(b);
    i1.Rotate(tetris::Rotation::Clockwise);
    i1.Translate(0,-18);
    i1.ApplyToBoard();
    std::cout << i1.x << " " << i1.y << "\n";
    std::cout << b << "\n";    
    
    tetris::LAction l1(b);
    l1.Translate(4,-20);
    l1.ApplyToBoard();
    std::cout << l1.x << " " << l1.y << "\n";
    std::cout << b << "\n";    
    
    tetris::TAction t1(b);
    t1.Rotate(tetris::Rotation::Clockwise);
    t1.Rotate(tetris::Rotation::Clockwise);
    t1.Translate(4,-18);
    t1.ApplyToBoard();
    std::cout << t1.x << " " << t1.y << "\n";
    std::cout << b << "\n";    
    
    tetris::OAction o1(b);
    o1.Translate(1,-16);
    o1.ApplyToBoard();
    std::cout << o1.x << " " << o1.y << "\n";
    std::cout << b << "\n";    
    
    tetris::TAction t2(b);
    t2.Translate(3,-17);
    t2.Rotate(tetris::Rotation::Clockwise);
    t2.ApplyToBoard();
    std::cout << t2.x << " " << t2.y << "\n";
    std::cout << b << "\n";    
}
