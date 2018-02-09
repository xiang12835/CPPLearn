#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
//    ofstream of("data.txt");//写
//    of<<"Hello Cpp\n";
//    of.close();

    ifstream inf("data.txt");//读
//    char c;
//    inf >> c;

    stringbuf sb;
    inf >> &sb;

//    cout << c;
    cout << sb.str();

//    cout << "Hello, World!" << endl;
    return 0;
}