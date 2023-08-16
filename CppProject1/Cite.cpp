#include<iostream>
using namespace std;

//引用传递
void swap(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;
}

//引用作为函数返回值：1、不要返回局部变量引用；2、函数调用可以作为左值；
int& test() {

    static int a = 30;
    return a;
}

int main()
{
    int a = 10;
    //int& b;  错误的,一定要初始化且不能改；
    int& b = a;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    b = 100;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    a = 10;
    b = 20;
    swap(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;


    int& ref = test();

    cout << "ref=" << ref << endl;

    test() = 1000;

    cout << "ref=" << ref << endl;
    system("pause");
    return 0;
}