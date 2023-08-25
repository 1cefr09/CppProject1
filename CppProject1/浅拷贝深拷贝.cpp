#include<iostream>
#include<string>

using namespace std;


class Person {

public:
	Person() {
		cout << "无参构造函数调用" << endl;
	}
	Person(int age, int height) {
		m_Age = age;
		m_Height = new int(height);

		cout << "有参构造函数调用" << endl;
	}
	Person(const Person& P) {
		m_Age = P.m_Age;
		//m_Height = P.m_Height; 默认操作 浅拷贝 把指针指向的地址给了对象
		m_Height = new int(*P.m_Height); //深拷贝 新开辟一块内存地址  把传入的值指向的地址里的值new一个新的出来
		cout << "拷贝构造函数调用" << endl;
	}
	//析构函数没返回值 不用写类型 名字与类名相同前加~  不能有参数不能重载 对象销毁前自动调用且就这一次
	~Person() {
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "析构函数调用" << endl;
	}
	int m_Age;
	int* m_Height;
};

static void test() {
	Person P(18, 170);
	 
	Person P2(P);

}

int main() {
	test();

	return 0;

}