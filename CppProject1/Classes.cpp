#include<iostream>
using namespace std;

const double PI = 3.1415;

//class Circle {
// ���е����Ժ���Ϊͳһ��Ϊ��Ա
// ���ԣ���Ա���ԡ���Ա����
// ��Ϊ����Ա��������Ա���� 
//	//����Ȩ�� public ���ڿ��Է��� ����Ҳ����
//			   protected ���ڿ��� ���ⲻ�� ������Է���
//			   private ���ڿ��� ���ⲻ��   ���಻�ɷ���
//public:
//	//���ԣ��뾶
//	int m_r;
//
//	//��Ϊ����ȡ�ܳ�
//	double calculate() {
//		return 2 * PI * m_r;
//	}
//};
class Student {
public:
	//����
	string m_Name;
	int m_ID;
	//��Ϊ
	void showStudent() {
		cout << "����" << m_Name << "ѧ�ţ�" << m_ID << endl;

	}
	void setName(string name) {
		m_Name = name;
	}

};


//int main() {
//	//Circle C1;
//	//C1.m_r = 10;
//	//cout << "C1�ܳ�=" << C1.calculate() << endl;
//
//	Student S1;
//	S1.m_Name = "Zhang San\t";
//	S1.m_ID = 1;
//	S1.showStudent();
//
//	Student S2;
//	S2.setName("Li Si\t");
//	S2.m_ID = 2;
//	S2.showStudent();
//
//	system("pause");
//	return 0;
//
//}  