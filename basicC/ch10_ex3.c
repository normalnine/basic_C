#include <stdio.h>
struct person
{
	char name[10];
	int age;
	char address[10];
};

void main()
{	
	// ����ü �迭
	struct person p[3] = {	{ "ȫ�浿",28,"seoul" },
							{ "�̼���",30,"busan" },
							{ "�庸��",25,"incheon" } };

	for (int i = 0; i < 3; i++)
	{
		printf("%8s %3d %10s\n", p[i].name, p[i].age, p[i].address);
	}

}