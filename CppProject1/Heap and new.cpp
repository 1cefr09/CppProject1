#include<iostream>
using namespace std;

int* func() {
	//堆区创建整形数据，new返回该类型指针
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
	//释放数组加[]
	delete[] arr;
}

int main() {
	test1();
	test2();
}