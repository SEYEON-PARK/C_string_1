#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[50] = "�ȳ��ϼ���. �ݰ����ϴ�!";
	printf("%s\n", a);

	strcpy_s(a, sizeof(a), "������ �ݰ�����.");
	printf("%s\n", a);

	return 0;
}