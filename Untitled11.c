#include <stdio.h>

int main(void)
{
	int x = 40, y = 40;
	printf("x가y보다 크고 y는 40 미만입니까?%d\n",(x > y) && (y < 40));
	printf("x가 y보다 작거나 혹은 y가 40 미만입니까?%d\n",(x < y) || (y < 40));	
	printf("x가 50이 아닙니까?%d\n",x != 50);
	return 0;
	
} 
