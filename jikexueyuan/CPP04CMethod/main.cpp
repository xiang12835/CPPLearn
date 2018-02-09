#include <iostream>
#include <stdio.h>

using namespace std;

class Object{
public:
    Object(){
        printf("create object\n");
    }

    ~Object(){
        printf("Deleted object\n");
    }
};

void runObj(){
    {
        Object obj;

    }
    printf("runObj end\n");
}

int main() {
//    Object *p = new Object();
//    delete p;

    runObj();
    printf("end\n");
    return 0;
}