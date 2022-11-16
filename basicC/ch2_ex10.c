#include<stdio.h>
main()
{
	float x;
	x = 136.5678900f;
	printf("(1) value = %f \n", x);
	printf("(2) value = %2.3f \n", x);
	printf("(3) value = %10.5f \n", x); // 소수점포함 총 10자리 & 소수점 5자리
	printf("(4) value = %012.5f \n", x);
	printf("(5) value = %-12.5f \n", x);

}