#include<stdio.h>

void main()
{
	char* name[4][10];
	int kor[4], eng[4], mat[4], mor[4], sum[4], avg[4];

	for (int i = 0; i < 4; i++)
	{
		printf("%d번 학생 이름 : ",i+1);
		scanf("%s", name[i]);
		printf("국어 : ");
		scanf("%d", &kor[i]);
		printf("영어 : ");
		scanf("%d", &eng[i]);
		printf("수학 : ");
		scanf("%d", &mat[i]);
		printf("도덕 : ");
		scanf("%d", &mor[i]);
	}

	printf("	국어	영어	수학	도덕	총점	평점\n");
	for (int j = 0; j < 4; j++)
	{
		sum[j] = kor[j] + eng[j] + mat[j] + mor[j];
		avg[j] = sum[j] / 4;
		printf("%s	%d	%d	%d	%d	%d	%d\n",name[j],kor[j],eng[j],mat[j],mor[j],sum[j],avg[j]);
	}

}