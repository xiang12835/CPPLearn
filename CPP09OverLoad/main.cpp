#include <iostream>
#include <stdio.h>

using namespace std;

class Hello {

public:
    void sayHello() {
        printf("Hello Cpp\n");
    }

//    void sayHello(char *name) {
//        printf("hello %s\n", name);
//    }
void sayHello(string name){
        string str = "Hello ";
        str += name;
        cout << str << endl;
    }


};

int main() {
    Hello *p = new Hello();
//    string name = "yx";
//    p->sayHello((char *)name.c_str());

    p -> sayHello("yx");

    return 0;
}