#include <iostream>
#include <stdio.h>
#include "Man.h"

using namespace std;

int main() {
    Man *m = new Man();
    m -> sayHello();

    printf("man age is %d\n", m->getAge());

    return 0;
}