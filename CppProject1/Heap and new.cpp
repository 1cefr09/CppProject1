#include<iostream>
using namespace std;

int* func() {
	//���������������ݣ�new���ظ�����ָ��
	int *p=new int(10);
	return p;
}

void test1() {
	int* p = func();
	cout << *p << endl;
	delete p;
}

void test2() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
		cout << arr[i] << endl;
	}
	//�ͷ������[]
	delete[] arr;
}

int main() {
	test1();
	test2();
}