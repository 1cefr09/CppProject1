#include<iostream>
#include<string>

using namespace std; 

class Person {
public:
	//传统初始化
	//Person(int a){
	//	m_A = a;
	//}
	//初始化列表初始化属性
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