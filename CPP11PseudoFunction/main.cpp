#include <iostream>
#include <stdio.h>

using namespace std;

void hello(){
    printf("Hello\n");
}

class Hello{

public:
    void operator()(){
        printf("Hello Cpp\n");
    }
};

int main() {

    hello();

    Hello h;
    h();
    return 0;
}