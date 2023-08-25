#include<iostream>
#include<string>

using namespace std;


class Person {
	//构造和析构默认空，编译器会自己写
	//构造函数没返回值 不用写类型 名字与类名相同 可以有参数可以重载 创建对象时自动调用且就这一次 

	//构造函数分类及调用 无参和有参 普通和拷贝

	//创建一个类 编译器会默认添加三个函数： 默认构造（空实现）、析构函数（空实现） 拷贝构造（值拷贝）
	//用户写有参构造函数时，不再提供无参默认构造 依然提供拷贝构造
	//用户写拷贝构造函数 编译器不提供其它构造函数

public:
	Person() {
		cout << "无参构造函数调用" << endl;
	}
	Person(int a) {
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person &P) {
		m_name = P.m_name;
		cout << "拷贝构造函数调用" << endl;
	}
	//析构函数没返回值 不用写类型 名字与类名相同前加~  不能有参数不能重载 对象销毁前自动调用且就这一次
	~Person() {
		cout << "析构函数调用" << endl;
	}

public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func() {
		m_name = "Zhang San";
		m_car = "Car";
		m_password = 12345678;
	}
};

static void test() {
	//括号法无参 有参 拷贝	默认不要加()
	//Person P1;
	//Person P2(10);
	//Person P3(P2);
	//显示法
	Person P1;
	Person P2 = Person(10);
	Person P3 = Person(P2);
	//隐式转换法
	Person P4=10;
	Person P5 = P4;
}

//int main() {
//	//Person P;
//	//system("pause");//注释掉这句就析构也会调用
//	test();
//
//
//	return 0;
//
//}