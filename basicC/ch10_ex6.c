#include <stdio.h>

struct person
{
	char name[20];
	char phone[20];
};

void main()
{	// ����ü ���� ����
	struct person man = { "Thejoeun","501-1300" };
	
	// ����ü ������ �̿��� ��� -> ����ü������.�����
	printf("name	: %s \n", man.name);
	printf("phone	: %s \n", man.phone);

	// ����ü �����ͺ��� ����
	struct person* pMan;
	pMan = &man;

	// ����ü ������ (����)���̿��� ��� -> ����ü������.����� 
	printf("name	: %s \n", (*pMan).name);
	printf("phone	: %s \n", (*pMan).phone);

	// ����ü �����͸� �̿��� ��� -> ����ü������->�����
	printf("name	: %s \n", pMan->name);
	printf("phone	: %s \n", pMan->phone);

}