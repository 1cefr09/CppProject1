#include<iostream>
using namespace std;

//���ô���
void swap(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;
}

//������Ϊ��������ֵ��1����Ҫ���ؾֲ��������ã�2���������ÿ�����Ϊ��ֵ��
int& test() {

    static int a = 30;
    return a;
}

int main()
{
    int a = 10;
    //int& b;  �����,һ��Ҫ��ʼ���Ҳ��ܸģ�
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