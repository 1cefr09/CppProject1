#include<iostream>
#include<string>

using namespace std;


class Person {

public:
	Person() {
		cout << "�޲ι��캯������" << endl;
	}
	Person(int age, int height) {
		m_Age = age;
		m_Height = new int(height);

		cout << "�вι��캯������" << endl;
	}
	Person(const Person& P) {
		m_Age = P.m_Age;
		//m_Height = P.m_Height; Ĭ�ϲ��� ǳ���� ��ָ��ָ��ĵ�ַ���˶���
		m_Height = new int(*P.m_Height); //��� �¿���һ���ڴ��ַ  �Ѵ����ֵָ��ĵ�ַ���ֵnewһ���µĳ���
		cout << "�������캯������" << endl;
	}
	//��������û����ֵ ����д���� ������������ͬǰ��~  �����в����������� ��������ǰ�Զ������Ҿ���һ��
	~Person() {
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "������������" << endl;
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