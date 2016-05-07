#include <iostream>
#include <stdio.h>
#include "Man.h"

using namespace std;


int main() {

    Man * m = new Man(20);
    printf("man age is %d", m ->getAge());
    return 0;
}