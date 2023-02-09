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
    std::cout << "���������� ������:" << std::endl;
    std::cout << "������: ";
    figure.print_sides();

    Triangle triangle(3);
    std::cout << "�����������: ";
    triangle.print_sides();

    Quadrangle quadrangle(4);
    std::cout << "���������������: ";
    quadrangle.print_sides();

}