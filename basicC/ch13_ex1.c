/*
1. 힙 메모리 4bytes 할당 malloc
2. 힙 접근 후 정수 상수 20 대입 
3. 힙 접근 후 정수 상수 20 출력
4. 힙 메모리 4bytes 해제 free
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p;
	p = (int)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("메모리 할당에 실패!!!");
		return 0;
	}
	*p = 20;
	printf("힙에 저장된 변수 p : %d \n", *p);

	free(p);
	return 0;
}