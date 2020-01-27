#include <stdio.h>

int main(void)
{
	int x = -50, y = 30;
	int absoluteX = (x > 0) ? x : -x; 
	printf("x의 절댓값은 %d입니다\n",absoluteX);
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	printf("x와 y중 최댓값은 %d입니다\n",max);
	printf("x와 y중 최솟값은 %d입니다\n",min);
	return 0;
}
