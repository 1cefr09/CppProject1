#include<iostream>
using namespace std;

const double PI = 3.1415;

//class Circle {
// 类中的属性和行为统一称为成员
// 属性：成员属性、成员变量
// 行为：成员函数、成员方法 
//	//访问权限 public 类内可以访问 类外也可以
//			   protected 类内可以 类外不可 子类可以访问
//			   private 类内可以 类外不可   子类不可访问
//public:
//	//属性：半径
//	int m_r;
//
//	//行为：获取周长
//	double calculate() {
//		return 2 * PI * m_r;
//	}
//};
class Student {
public:
	//属性
	string m_Name;
	int m_ID;
	//行为
	void showStudent() {
		cout << "姓名" << m_Name << "学号：" << m_ID << endl;

	}
	void setName(string name) {
		m_Name = name;
	}

};


//int main() {
//	//Circle C1;
//	//C1.m_r = 10;
//	//cout << "C1周长=" << C1.calculate() << endl;
//
//	Student S1;
//	S1.m_Name = "Zhang San\t";
//	S1.m_ID = 1;
//	S1.showStudent();
//
//	Student S2;
//	S2.setName("Li Si\t");
//	S2.m_ID = 2;
//	S2.showStudent();
//
//	system("pause");
//	return 0;
//
//}  