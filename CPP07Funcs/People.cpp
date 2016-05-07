//
// Created by Administrator on 2016/3/12.
//

#include <stdio.h>
#include "People.h"

namespace yx {
    People::People() {
        this -> age = 27;
        this -> sex = 1;
    }

    People::People(int age, int sex) {
        this -> age = age;
        this -> sex = sex;
    }

    int  People::getAge() {
        return this -> age;
    }

    int People::getSex() {
        return this -> sex;
    }

    void People::sayHello() {
        printf("People say: Hello CPP\n");
    }
}