#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

//����ü
struct Student{ // ����� ���� ����Ÿ Ÿ��
	char name[30]; //����ü ���
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


	printf("�̸�: %s, ����: %d, �г�: %d\n", a.name, a.age, a.grade);
	printf("�̸�: %s, ����: %d, �г�: %d\n", a.Next->name, a.Next->age, a.Next ->grade);
	printf("�̸�: %s, ����: %d, �г�: %d\n", a.Next->Next->name, a.Next->Next->age, a.Next->Next->grade);


	return 0;
}

