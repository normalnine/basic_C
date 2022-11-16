#include <stdio.h>
void main()
{
	char str1[5] = "abcd";	//문자열배열
	char* str2 = "ABCD";	//char* 포인터 변수

	printf("%s\n", str1);
	printf("%s\n", str2);

	str1[0] = 'x';	//배열요소의 값 수정 가능
	//str2[0] = 'X' 는 error : "문자열상수" 수정 불가능
}