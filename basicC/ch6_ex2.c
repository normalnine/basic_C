#include<stdio.h>
int main(void)
{
	int opt;
	float val1, val2;
	float result;

	printf("µ¡¼À 1, »¬¼À 2, °ö¼Á 3, ³ª´°¼À 4\n");
	printf("¼±ÅÃ?: ");
	scanf("%d", &opt);
	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â :");
	scanf("%f %f", &val1, &val2);

	if (opt == 1)
	{
		result = val1 + val2;
		printf("°á°ú : %f\n", result);
	}
	if (opt == 2)
	{
		result = val1 - val2;
		printf("°á°ú : %f\n", result);
	}
	if (opt == 3)
	{
		result = val1 * val2;
		printf("°á°ú : %f\n", result);
	}
	if (opt == 4)
	{
		result = val1 / val2;
		printf("°á°ú : %f\n", result);
	}
	return 0;
}