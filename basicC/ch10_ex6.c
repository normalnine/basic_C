#include <stdio.h>

struct person
{
	char name[20];
	char phone[20];
};

void main()
{	// 구조체 변수 선언문
	struct person man = { "Thejoeun","501-1300" };
	
	// 구조체 변수를 이용한 출력 -> 구조체변수명.멤버명
	printf("name	: %s \n", man.name);
	printf("phone	: %s \n", man.phone);

	// 구조체 포인터변수 선언문
	struct person* pMan;
	pMan = &man;

	// 구조체 포인터 (변수)를이용한 출력 -> 구조체포인터.멤버명 
	printf("name	: %s \n", (*pMan).name);
	printf("phone	: %s \n", (*pMan).phone);

	// 구조체 포인터를 이용한 출력 -> 구조체포인터->멤버명
	printf("name	: %s \n", pMan->name);
	printf("phone	: %s \n", pMan->phone);

}