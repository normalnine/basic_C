#include <stdio.h>
struct person
{
	char name[10];
	char phone[20];
};
void main()
{
	struct person pArray[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("�̸�, ��ȭ��ȣ ������ �Է� : ");
		scanf("%s %s", pArray[i].name, pArray[i].phone);
	}
	printf("\n�Է� ����� ������ �����ϴ�.\n");
	for (i = 0; i < 3; i++)
	{
		printf("�̸� : %s, ", pArray[i].name);
		printf("��ȭ��ȣ : %s\n", pArray[i].phone);
	}
}