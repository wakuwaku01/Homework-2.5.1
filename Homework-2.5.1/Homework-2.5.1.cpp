#include <iostream>

class Figure {
private:
    int sides = 0;
public:
    Figure(int sides) { this->sides = sides; }
    void print_sides() { std::cout << sides << std::endl; }
};

class Triangle : public Figure {
private:
    int sides = 3;
public:
    Triangle(int sides) : Figure(0) { this->sides = sides; }
    void print_sides() { std::cout << sides << std::endl; }

};

class Quadrangle : public Figure {
private:
    int sides = 4;
public:
    Quadrangle(int sides) : Figure(0) { this->sides = sides; }
    void print_sides() { std::cout << sides << std::endl; }

};

int main() {
    setlocale(LC_ALL, "Russian");

    Figure figure(0);
    std::cout << "Количество сторон:" << std::endl;
    std::cout << "Фигура: ";
    figure.print_sides();

    Triangle triangle(3);
    std::cout << "Треугольник: ";
    triangle.print_sides();

    Quadrangle quadrangle(4);
    std::cout << "Четырехугольник: ";
    quadrangle.print_sides();

}