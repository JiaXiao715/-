#include <stdio.h>
int main(void)
{
	int i=0,n,a[32];
	printf("������һ��ʮ��������\n");
	scanf("%d",&n);
	printf("�˽�����Ϊ��%o\n",n);
	while (n>0)
    {
        a[i]=n%2;
        i=i+1;
        n=n/2;
    }
    printf("��������Ϊ:");
    for(i--;i>=0;i--)
        printf("%d",a[i]);
    printf("\n"); 
}
