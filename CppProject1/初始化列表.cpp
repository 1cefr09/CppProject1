#include<iostream>
#include<string>

using namespace std; 

class Person {
public:
	//��ͳ��ʼ��
	//Person(int a){
	//	m_A = a;
	//}
	//��ʼ���б��ʼ������
	Person(int a,int b) :m_A(a),m_B(b){ 
		
	}

	int m_A;
	int m_B;
};

void test(){
	Person p(10,20);
	cout << "m_A:" << p.m_A << endl;
	cout << "m_B:" << p.m_B << endl;
}


//int main() {
//	test();
//
//	return 0;
//
//}