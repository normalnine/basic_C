#include<stdio.h>

struct HUMAN
{
	char* name;
	int age;
	char* job;
	char* tel;
};

void main()
{
	//����ü ���� ����
	struct HUMAN man;

	//����ü ��� ����
	man.name = "ȫ�浿";
	man.age = 27;
	man.job = "������";
	man.tel = "123-4567";
	printf("���� : %s\n", man.name);
	printf("���� : %d\n", man.age);
	printf("���� : %s\n", man.job);
	printf("��ȭ��ȣ : %s\n", man.tel);
}