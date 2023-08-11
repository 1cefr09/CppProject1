#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;

};
int main() {
	struct Student S1;
	S1.name = "Zhang San";
	S1.age = 18;
	S1.score = 100;
	cout << "name=" << S1.name << " age=" << S1.age << " score=" << S1.score << endl;

	struct Student S2 = { "Li Si",19,90 };
	cout << "name=" << S2.name << " age=" << S2.age << " score=" << S2.score << endl;

}

