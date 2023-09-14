#include<iostream>
#include<string>

using namespace std;

//静态成员变量 所有对象共享一份数据 在编译阶段分配内存 类内声明 类外初始化    不属于某个对象 所有对象共享同一份数据
//有两种访问方式：1对象 2类名
//静态成员函数 所有对象共享同一个函数 只能访问静态成员变量
class Person {
public:
	//也有访问权限
	static int m_A;
	static void func() {
		cout << "func调用" << endl;
	}
};

int Person::m_A=100;

static void test1() {
	Person p;
	cout << p.m_A << endl;
	p.func();//通过对象访问

	Person p1;
	p1.m_A = 200;
	cout << p.m_A << endl;
	Person::func;//通过类名访问


}

static void test2() {

	cout << Person::m_A << endl;
}

int main() {
	test1();
	test2();
}