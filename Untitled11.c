#include <stdio.h>

int main(void)
{
	int x = 40, y = 40;
	printf("x��y���� ũ�� y�� 40 �̸��Դϱ�?%d\n",(x > y) && (y < 40));
	printf("x�� y���� �۰ų� Ȥ�� y�� 40 �̸��Դϱ�?%d\n",(x < y) || (y < 40));	
	printf("x�� 50�� �ƴմϱ�?%d\n",x != 50);
	return 0;
	
} 
