#include<stdio.h>

void main()
{
	char* name[4][10];
	int kor[4], eng[4], mat[4], mor[4], sum[4], avg[4];

	for (int i = 0; i < 4; i++)
	{
		printf("%d�� �л� �̸� : ",i+1);
		scanf("%s", name[i]);
		printf("���� : ");
		scanf("%d", &kor[i]);
		printf("���� : ");
		scanf("%d", &eng[i]);
		printf("���� : ");
		scanf("%d", &mat[i]);
		printf("���� : ");
		scanf("%d", &mor[i]);
	}

	printf("	����	����	����	����	����	����\n");
	for (int j = 0; j < 4; j++)
	{
		sum[j] = kor[j] + eng[j] + mat[j] + mor[j];
		avg[j] = sum[j] / 4;
		printf("%s	%d	%d	%d	%d	%d	%d\n",name[j],kor[j],eng[j],mat[j],mor[j],sum[j],avg[j]);
	}

}