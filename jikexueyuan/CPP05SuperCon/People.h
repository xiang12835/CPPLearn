//
// Created by Administrator on 2016/3/12.
//

#ifndef INC_01OOP_PEOPLE_H
#define INC_01OOP_PEOPLE_H

namespace yx {

    class People {
    public:
        People();
        People(int age, int sex);
        int getAge();
        int getSex();
        void sayHello();

    private:
        int age;
        int sex;
    };
}
#endif //INC_01OOP_PEOPLE_H
