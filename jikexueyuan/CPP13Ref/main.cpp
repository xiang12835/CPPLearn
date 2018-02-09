#include <iostream>

using namespace std;

class Point {

private:
    int x,y;

public:
    Point(int x,int y){
        this->x=x;
        this->y = y;
    };

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    void add(Point &p){
        this->x+=p.x;
        this->y+=p.y;
    }
};


int main() {
    Point p(1,1);
    Point p1(2,3);
    p.add(p1);
    cout << "Hello, World!" << endl;
    return 0;
}