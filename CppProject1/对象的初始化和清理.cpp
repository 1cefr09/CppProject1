#include<iostream>
#include<string>

using namespace std;


class Person {
	//构造和析构默认空，编译器会自己写
	//构造函数没返回值 不用写类型 名字与类名相同 可以有参数可以重载 创建对象时自动调用且就这一次 
public:
	Person() {
		cout << "构造函数调用" << endl;
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

int main() {
	Person P;
	system("pause");//注释掉这句就析构也会调用
	return 0;

}