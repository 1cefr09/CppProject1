#include<iostream>
#include<string>

using namespace std;

class Phone {
public:
	Phone(string name) {
		m_PName = name;
		cout << "Phone构造函数调用" << endl;
	}
	~Phone() {
		cout << "Phone析构函数调用" << endl;
	}
	//手机品牌名
	string m_PName;


};
//先构造其他对象，再构造自身
class Person {
public:
	Person(string name, string pName) :name(name), m_Phone(pName) {
		cout << "Person构造函数调用" << endl;
	}
	~Person() {
		cout << "Person析构函数调用" << endl;
	}
	string name;
	Phone m_Phone;
};

static void test() {

	Person("Zhang San", "IPhone");
}

//int main() {
//	test();
//	return 0;
//
//}