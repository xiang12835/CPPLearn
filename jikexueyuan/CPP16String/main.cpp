#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str;
    str+="a ";
    str+="b";
    cout << str <<endl;

    stringstream ss;
    ss<<"A ";
    ss<<200;
    ss<< "B "<<"C"<<100;

    cout<<ss.str();//c++语言字符串
    cout<<ss.str().c_str();//c语言字符串

    return 0;
}