#include<iostream>
#include<string>

using namespace std;


class Person {
	//���������Ĭ�Ͽգ����������Լ�д
	//���캯��û����ֵ ����д���� ������������ͬ �����в����������� ��������ʱ�Զ������Ҿ���һ�� 
public:
	Person() {
		cout << "���캯������" << endl;
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

int main() {
	Person P;
	system("pause");//ע�͵���������Ҳ�����
	return 0;

}