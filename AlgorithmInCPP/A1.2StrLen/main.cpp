#include <iostream>
#include <stdio.h>

using namespace std;

/*递归的方式求字符串的长度*/
int RecurLen(char * str) {
    if (str[0] == '\0')
        return 0;
    else
        return RecurLen(str+1)+1;
}

/*字符串中最后一个单词的长度，已知字符串的长度*/
int LastWordLen1(char* str, int len) {
    int lastLen = 0;
    int index = len-1;

    while (index>=0 && str[index--]!=' ')
        lastLen++;

    return lastLen;
}

/*字符串中最后一个单词的长度，字符串的长度未知*/
int LastWordLen2(char* str) {
    int lastLen = 0;
    int index = 0;

    while(str[index] != '\0'){
        if (str[index] == ' ')
            lastLen = 0;
        else
            ++lastLen;
        ++index;
    }

    return lastLen;
}

/*字符串内存的拷贝，实现memmove()*/
char* my_memmove(char* src, char* dst, int count){
    char* ret = dst;
    if (src == NULL || dst == NULL)
        return NULL;
    //如果dst和src区域没有重叠，那么从开始处逐一拷贝
    if (dst < src || dst >= src+count){
        while(count--){
            *dst = *src;
            dst++;
            src++;
        }
    } else {//如果dst和src区域有交叉，那么从尾部开始向起始位置拷贝，这样可以避免数据重叠
        dst = dst + count - 1;
        src = src + count - 1;
        while(count--){
            *dst = *src;
            dst--;
            src--;
        }
    }

    return ret;
}


int main() {
    char str[]="yu xiang";
    printf("str len is %d\n",RecurLen(str));
	printf("lastword len1 is %d\n",LastWordLen1(str,8));
    printf("lastword len2 is %d\n",LastWordLen2(str));
//    cout << "Hello, World!" << endl;
    return 0;
}