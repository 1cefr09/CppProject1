#include<iostream>
#include<string>

using namespace std;

//��̬��Ա���� ���ж�����һ������ �ڱ���׶η����ڴ� �������� �����ʼ��    ������ĳ������ ���ж�����ͬһ������
//�����ַ��ʷ�ʽ��1���� 2����
//��̬��Ա���� ���ж�����ͬһ������ ֻ�ܷ��ʾ�̬��Ա����
class Person {
public:
	//Ҳ�з���Ȩ��
	static int m_A;
	static void func() {
		cout << "func����" << endl;
	}
};

int Person::m_A=100;

static void test1() {
	Person p;
	cout << p.m_A << endl;
	p.func();//ͨ���������

	Person p1;
	p1.m_A = 200;
	cout << p.m_A << endl;
	Person::func;//ͨ����������


}

static void test2() {

	cout << Person::m_A << endl;
}

int main() {
	test1();
	test2();
}