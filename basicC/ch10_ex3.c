#include <stdio.h>
struct person
{
	char name[10];
	int age;
	char address[10];
};

void main()
{	
	// 구조체 배열
	struct person p[3] = {	{ "홍길동",28,"seoul" },
							{ "이순신",30,"busan" },
							{ "장보고",25,"incheon" } };

	for (int i = 0; i < 3; i++)
	{
		printf("%8s %3d %10s\n", p[i].name, p[i].age, p[i].address);
	}

}