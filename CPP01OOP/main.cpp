#include <iostream>
#include "People.h"

using namespace std;

int main() {
    People *p = new People();
    p -> sayHello();

    cout << "Hello, World!" << endl;
    return 0;
}