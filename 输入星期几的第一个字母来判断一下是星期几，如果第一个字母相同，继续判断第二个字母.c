#include<stdio.h>
#include<stdlib.h>

int main()
{
	char i, j;
	printf("�������һ����ĸ\n");
	scanf("%c", &i);
	getchar();
	switch (i)
	{
	case 'm':
		printf("monday\n");
		break;
	case 't':
		printf("������ڶ�����ĸ\n");
		scanf("%c", &j);
		if (j == 'u')
			printf("tuesday\n");
		if (j == 'h')
			printf("thursday\n");
		break;
	case 'w':
		printf("wednesday\n");
		break;
	case 'f':
		printf("friday\n");
		break;
	case 's':
		printf("������ڶ�����ĸ\n");
		scanf("%c", &j);
		if (j == 'a')
			printf("saturday\n");
		else if (j == 'u')
			printf("sunday\n");
		else
			printf("day error\n");
		break;
	default:
		printf("day error\n");
		break;
	}
	system("pause");
	return 0;
}
