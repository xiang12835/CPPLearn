#include <iostream>
#include <stdio.h>

using namespace std;

/*查找字符串中各个字符出现的次数*/
void FindTimes(char* str) {
    int hash[256] = {0};
    int index = 0;

    while (str[index++]!='\0'){
        hash[str[index]]++;
    }

    for (int i = 0; i < 256; i++){
        printf("%d",hash[i]);
    }
}

int main() {
    char str[] = "yu xiang yu";
    FindTimes(str);
//    cout << "Hello, World!" << endl;
    return 0;
}