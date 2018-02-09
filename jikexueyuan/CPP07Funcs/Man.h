//
// Created by Administrator on 2016/3/12.
//

#ifndef INC_03CLASSES_MAN_H
#define INC_03CLASSES_MAN_H

#include "People.h"
#include <stdio.h>

class Man:public yx::People {
public:
    Man(int age);
    void sayHello();
    void eat();
};


#endif //INC_03CLASSES_MAN_H
