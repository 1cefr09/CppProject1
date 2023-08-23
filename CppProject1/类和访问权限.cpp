#include<iostream>
#include<string>

using namespace std;

const double PI = 3.1415;


// 类中的属性和行为统一称为成员
// 属性：成员属性、成员变量
// 行为：成员函数、成员方法 
//	//访问权限 public 类内可以访问 类外也可以
//			   protected 类内可以 类外不可 子类可以访问
//			   private 类内可以 类外不可   子类不可访问
class Person {
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func(){
		m_name = "Zhang San";
		m_car = "Car";
		m_password = 12345678;
	}
};


//int main() {
//	Person P1;
//	P1.m_name = "Zhang San";
//	//car和password不能在类外访问；
//
//	system("pause");
//	return 0;
//
//}