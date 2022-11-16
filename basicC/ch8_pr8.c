#include <stdio.h>

int two[50];

int change(int n)
{
    int i;
    for (i = 0;; i++)
    {
        two[i] = n % 2;      // 뒤에서부터 i번째 자리의 값을 저장한다.
        n /= 2;            // 2로 나눈 몫을 저장한다.
        if (n == 0) break;   // 0이 남으면 종료한다.
    }
    return i;
}

int main()
{
    int N, cnt, i;
    printf("10진수 정수 입력 : ");
    scanf("%d", &N);
    cnt = change(N);   // 함수를 호출하여 이진수로 변환한 마지막 위치를 cnt에 저장한다.
    for (i = cnt; i >= 0; i--) // two[0]이 1의 자리이므로 마지막 위치부터 출력한다.
    {
        printf("%d", two[i]);
    }
    return 0;
}
