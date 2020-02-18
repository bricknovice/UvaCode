#include <iostream>

// 須引進標頭檔
#include "class_demo4.h"

using namespace std;

int main(void) {
    Demo t1;
    Demo t2(12);
    Demo t3(13, 24);
    cout << endl;
    cout << t1.do_something() << endl;
    cout << t2.do_something() << endl;
    cout << t3.do_something() << endl;
    cout << endl;
    
    return 0;
}