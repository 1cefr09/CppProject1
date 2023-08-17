#include<iostream>
using namespace std;
//函数声明和定义中只能有一个有默认参数；
//占位参数： void func(int a =10; int ) 占位也可以有默认参数

//函数重载：同一个作用域下，名称相同，参数类型或个数或顺序不同的函数可以共存；返回值不可作为重载条件；  函数有默认参数可能出现歧义报错；

void func() {
	cout << "func" << endl;

}


void func(int a,double b) {
	cout << "func（int,double)" << endl;
}

void func(double a, int b) {
	cout << "func（double,int)" << endl;
}


int main() {
	func();
	func(10, 3.14);
	func(3.14, 10);

}