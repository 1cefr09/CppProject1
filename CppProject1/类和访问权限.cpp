#include<iostream>
#include<string>

using namespace std;

const double PI = 3.1415;


// ���е����Ժ���Ϊͳһ��Ϊ��Ա
// ���ԣ���Ա���ԡ���Ա����
// ��Ϊ����Ա��������Ա���� 
//	//����Ȩ�� public ���ڿ��Է��� ����Ҳ����
//			   protected ���ڿ��� ���ⲻ�� ������Է���
//			   private ���ڿ��� ���ⲻ��   ���಻�ɷ���
class Person {
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func(){
		m_name = "Zhang San";
		m_car = "Car";
		m_password = 12345678;
	}
};


//int main() {
//	Person P1;
//	P1.m_name = "Zhang San";
//	//car��password������������ʣ�
//
//	system("pause");
//	return 0;
//
//}