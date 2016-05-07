#include <iostream>
#include "People.h"

using namespace std;
using namespace yx;
int main() {
    People *p = new People();
    p -> sayHello();

    delete p;

    return 0;
}