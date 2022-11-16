#include<stdio.h>
void main()
{
	int a;
	a = 12345;
	printf("(1) value = %d \n", a);
	printf("(2) value = %3d \n", a);
	printf("(3) value = %8d \n", a); //8칸 공간 확보
	printf("(4) value = %08d \n", a); // 빈 공간 0으로 채우기
	printf("(5) value = %-8d \n", a); //뒤쪽 3칸 공간 확보
}