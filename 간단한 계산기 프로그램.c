#include <stdio.h>

int main (void)
{
	char o;
	int x, y;
	while(1)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d %c %d",&x, &o, &y); 
		if (o == '+')
		{
			printf("%d + %d = %d\n ",x, y, x+y);
		}
		else if (o == '-')
		{
			printf("%d - %d = %d\n ",x, y, x-y);
		}
		else if (o == 'x')
		{
			printf("%d x %d = %d\n ",x, y, x*y);
		}
		else if (o == '/')
		{
			printf("%d / %d = %d\n ",x, y, x/y);
		}
		else if (o == '%')
		{
			printf("%d % %d = %d\n ",x, y, x%y);
		}
		else
		{
			printf("�Է��� �߸� �Ǿ����ϴ�.\n");
			
		}
		getchar();
		printf("���α׷��� ���� �Ͻðڽ��ϱ�? (y/n)\n");
		scanf("%c",&o);
		if (o == 'n'|| o == 'N')
		{
			continue;
		}
		else if (o =='y' || o == 'Y')
		{
			break;
		}
		else 
		{
			printf("�Է��� �߸��Ǿ����ϴ�.\n");
		}
	}
	return 0;
}
