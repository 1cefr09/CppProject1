#include<iostream>
#include<string>

using namespace std;


class Person {
	//���������Ĭ�Ͽգ����������Լ�д
	//���캯��û����ֵ ����д���� ������������ͬ �����в����������� ��������ʱ�Զ������Ҿ���һ�� 

	//���캯�����༰���� �޲κ��в� ��ͨ�Ϳ���

	//����һ���� ��������Ĭ��������������� Ĭ�Ϲ��죨��ʵ�֣���������������ʵ�֣� �������죨ֵ������
	//�û�д�вι��캯��ʱ�������ṩ�޲�Ĭ�Ϲ��� ��Ȼ�ṩ��������
	//�û�д�������캯�� ���������ṩ�������캯��

public:
	Person() {
		cout << "�޲ι��캯������" << endl;
	}
	Person(int a) {
		cout << "�вι��캯������" << endl;
	}
	Person(const Person &P) {
		m_name = P.m_name;
		cout << "�������캯������" << endl;
	}
	//��������û����ֵ ����д���� ������������ͬǰ��~  �����в����������� ��������ǰ�Զ������Ҿ���һ��
	~Person() {
		cout << "������������" << endl;
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
	//���ŷ��޲� �в� ����	Ĭ�ϲ�Ҫ��()
	//Person P1;
	//Person P2(10);
	//Person P3(P2);
	//��ʾ��
	Person P1;
	Person P2 = Person(10);
	Person P3 = Person(P2);
	//��ʽת����
	Person P4=10;
	Person P5 = P4;
}

//int main() {
//	//Person P;
//	//system("pause");//ע�͵���������Ҳ�����
//	test();
//
//
//	return 0;
//
//}