#include <iostream>
#include <stdio.h>

using namespace std;

class A{
    friend class B;

private:
    int num;

    public:
    A(){
    num = 10;
    }
};

class B{

public:
    B(){
        A a;
        printf("%d\n",a.num);
    }
};

int main() {
    B b;
    return 0;
}