#include <iostream>
#include "Man.h"

using namespace std;

int main() {
    yx::People * p = new Man(20);
    p ->sayHello();
    p ->eat();
    return 0;
}