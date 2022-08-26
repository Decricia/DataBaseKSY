#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

//구조체
struct Student{ // 사용자 정의 데이타 타입
	char name[30]; //구조체 멤버
	int age;
	int grade;

	struct Student* Next;
};
int main() {
	struct Student a;
	struct Student b;
	struct Student c;

	strcpy(a.name, "MONS");
	a.age = 10;
	a.grade = 3;

	strcpy(b.name, "MONS1");
	b.age = 11;
	b.grade = 4;

	strcpy(c.name, "MONS2");
	c.age = 15;
	c.grade = 7;

	a.Next = &b;
	b.Next = &c;


	printf("이름: %s, 나이: %d, 학년: %d\n", a.name, a.age, a.grade);
	printf("이름: %s, 나이: %d, 학년: %d\n", a.Next->name, a.Next->age, a.Next ->grade);
	printf("이름: %s, 나이: %d, 학년: %d\n", a.Next->Next->name, a.Next->Next->age, a.Next->Next->grade);


	return 0;
}

