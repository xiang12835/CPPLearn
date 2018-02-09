#include <iostream>
#include <stdio.h>

using namespace std;

class Object;
typedef void(Object::*SayHi)();


class Object {
public:
//    void (Object::*sayhi)();
SayHi sayhi;
};

class Hello:public Object{
public:
    Hello(){
//        sayhi = (void (Object::*)())(&Hello::helloSayHi);
        sayhi = (SayHi)(&Hello::helloSayHi);
        (this->*sayhi)();
    }
    void helloSayHi(){
        printf("Hello CPP\n");
    }
};

int main() {
    Hello *h = new Hello();
    delete h;
    return 0;
}