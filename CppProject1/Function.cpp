#include<iostream>
using namespace std;
//���������Ͷ�����ֻ����һ����Ĭ�ϲ�����
//ռλ������ void func(int a =10; int ) ռλҲ������Ĭ�ϲ���

//�������أ�ͬһ���������£�������ͬ���������ͻ������˳��ͬ�ĺ������Թ��棻����ֵ������Ϊ����������  ������Ĭ�ϲ������ܳ������屨��

void func() {
	cout << "func" << endl;

}


void func(int a,double b) {
	cout << "func��int,double)" << endl;
}

void func(double a, int b) {
	cout << "func��double,int)" << endl;
}


int main() {
	func();
	func(10, 3.14);
	func(3.14, 10);

}