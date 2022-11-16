#include<stdio.h>
int main(void)
{
	int somang[5];
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d층 사람 수를 입력해주세요 : ",i+1);
		scanf("%d", &somang[i]);
		sum += somang[i];
	}
	printf("소망빌라 전체 사람수는 %d명 입니다.", sum);
	return 0;
}