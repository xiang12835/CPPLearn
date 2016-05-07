//
// Created by Administrator on 2016/3/12.
//

#include <stdio.h>
#include "Man.h"

Man::Man(int age):yx::People::People(age, 1) {

}

void Man::sayHello() {
    yx::People::sayHello();

    printf("Man say: hello Cpp\n");
}