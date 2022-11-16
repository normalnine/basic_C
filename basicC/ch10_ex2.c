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
	//구조체 변수 선언
	struct HUMAN man;

	//구조체 멤버 참조
	man.name = "홍길동";
	man.age = 27;
	man.job = "공무원";
	man.tel = "123-4567";
	printf("성명 : %s\n", man.name);
	printf("나이 : %d\n", man.age);
	printf("직업 : %s\n", man.job);
	printf("전화번호 : %s\n", man.tel);
}