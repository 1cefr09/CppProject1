#include<iostream>
#include<string>

using namespace std;

class Phone {
public:
	Phone(string name) {
		m_PName = name;
		cout << "Phone���캯������" << endl;
	}
	~Phone() {
		cout << "Phone������������" << endl;
	}
	//�ֻ�Ʒ����
	string m_PName;


};
//�ȹ������������ٹ�������
class Person {
public:
	Person(string name, string pName) :name(name), m_Phone(pName) {
		cout << "Person���캯������" << endl;
	}
	~Person() {
		cout << "Person������������" << endl;
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