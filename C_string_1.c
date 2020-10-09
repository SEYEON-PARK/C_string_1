#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[50] = "안녕하세요. 반갑습니다!";
	printf("%s\n", a);

	strcpy_s(a, sizeof(a), "만나서 반가워요.");
	printf("%s\n", a);

	return 0;
}