#include <iostream>

typedef struct {
    int x;
    int y;
} Point;

void printPoint(Point&);

int main() {
    Point p1;
    p1.x = 1;
    p1.y = 2;

    printPoint(p1);
    printPoint(p1);

    return 0;
}

void printPoint(Point& p) {
    std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
    p.x = 3;
}