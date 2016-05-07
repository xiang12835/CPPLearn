#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace std;

int main() {
    list<string> l;
    l.push_back("Hello");
    l.push_back("World");

    list<string>::iterator it;
    for (it = l.begin();it != l.end();it++){
        cout<<*it<<endl;
    }

    map<string,string> m;
    m.insert(pair<string,string>("a","A"));
    m.insert(pair<string,string>("b","B"));
    cout << m.at("a") << endl;

    m["d"] = "D"; //C++重载了[]运算符
    cout << m.at("d") << endl;

    return 0;
}