#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int getX() {
        return this->x;
    }

    int getY() {
        return this->y;
    }

    void add(int x, int y) {
        this->x += x;
        this->y += y;
    }

    void add(Point p) {
        add(p.getX(), p.getY());
    }

    void operator+=(Point p) {
        add(p);
    }

};

int main() {
//    Point p = Point(10, 10);
//    p.add(Point(12, 12));
//
//    p += Point(13, 13);

    Point *p = new Point(6, 6);
    (*p) += Point(2, 2);

    cout << p->getY() << endl;
    return 0;
}