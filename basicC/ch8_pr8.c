#include <stdio.h>

int two[50];

int change(int n)
{
    int i;
    for (i = 0;; i++)
    {
        two[i] = n % 2;      // �ڿ������� i��° �ڸ��� ���� �����Ѵ�.
        n /= 2;            // 2�� ���� ���� �����Ѵ�.
        if (n == 0) break;   // 0�� ������ �����Ѵ�.
    }
    return i;
}

int main()
{
    int N, cnt, i;
    printf("10���� ���� �Է� : ");
    scanf("%d", &N);
    cnt = change(N);   // �Լ��� ȣ���Ͽ� �������� ��ȯ�� ������ ��ġ�� cnt�� �����Ѵ�.
    for (i = cnt; i >= 0; i--) // two[0]�� 1�� �ڸ��̹Ƿ� ������ ��ġ���� ����Ѵ�.
    {
        printf("%d", two[i]);
    }
    return 0;
}
