#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;

};


//typedef struct	用typedef定义数据结构，后面可以直接用Student，不需要写struct
//{
//	string name;
//	int age;
//	int score;
//
//}Student;

//结构体嵌套

struct Teacher {
	int id;
	string name;
	int age;
	struct Student stu;

};


void printStudents(const Student *s) {

	//s->age = 100; 参数加const防止修改
	cout << "name=" << s->name << " age=" << s->age << " score=" << s->score << endl;
}

//int main() {
//	struct Student S1;
//	S1.name = "Zhang San";
//	S1.age = 18;
//	S1.score = 100;
//	cout << "name=" << S1.name << " age=" << S1.age << " score=" << S1.score << endl;
//
//	struct Student S2 = { "Li Si",19,90 };
//	cout << "name=" << S2.name << " age=" << S2.age << " score=" << S2.score << endl;
//
//	//结构体数组
//	struct Student stuArray[3] = {
//		{"Zhang San",18,100},
//		{"Li Si",19,90},
//		{"Wang Wu",20,85}
//	};
//	for (int i = 0; i < 3; i++) {
//		cout << "name=" << stuArray[i].name
//			<< " age=" << stuArray[i].age
//			<< " score=" << stuArray[i].score<<endl;
//	}
//
//	//结构体指针
//
//	struct Student s = { "Zhang San",18,100 };
//	Student* p = &s;
//	cout << "name=" << p ->name << " age=" << p->age << " score=" << p->score << endl;
//
//	//嵌套
//	Teacher t;
//	t.id = 10000;
//	t.name = "Lao Wang";
//	t.age = 50;
//	t.stu.name = "Xiao Wang";
//	t.stu.age = 18;
//	t.stu.score = 80;
//
//}


 