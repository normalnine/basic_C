/*
1. �� �޸� 4bytes �Ҵ� malloc
2. �� ���� �� ���� ��� 20 ���� 
3. �� ���� �� ���� ��� 20 ���
4. �� �޸� 4bytes ���� free
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p;
	p = (int)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("�޸� �Ҵ翡 ����!!!");
		return 0;
	}
	*p = 20;
	printf("���� ����� ���� p : %d \n", *p);

	free(p);
	return 0;
}