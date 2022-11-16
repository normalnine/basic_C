#include <stdio.h>
void main()
{
	int i, j, s;
	int score[][3] = { {95, 60, 80},
	{85, 75, 90},
	{80, 92, 78},
	{96, 86, 98},
	{75, 53, 93} };
	printf("===========================\n");
	printf(" kor eng mat total \n");
	printf("---------------------------\n");
	for (i = 0; i < 5; i++)
	{
		s = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%6d", score[i][j]);
			s += score[i][j];
		}
		printf(" %2d \n", s);
		printf("------------------------\n");
	}

}