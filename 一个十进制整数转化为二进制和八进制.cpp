#include <stdio.h>
int main(void)
{
	int i=0,n,a[32];
	printf("请输入一个十进制整数\n");
	scanf("%d",&n);
	printf("八进制数为：%o\n",n);
	while (n>0)
    {
        a[i]=n%2;
        i=i+1;
        n=n/2;
    }
    printf("二进制数为:");
    for(i--;i>=0;i--)
        printf("%d",a[i]);
    printf("\n"); 
}
