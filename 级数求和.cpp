/*级数求和
题目描述

已知： Sn =1+1/2+1/3+…+1/n。显然对于任意一个整数 k，当 n 足够大的时候，Sn>k。

现给出一个整数 k，要求计算出一个最小的 n，使得 Sn>k。

输入格式

一个正整数 k

输出格式

一个正整数 n

输入样例

1

输出样例

2

        （1）编程思路。
        用简单的循环完成多项式求和。循环控制条件为和S<=K。*/
#include <stdio.h>
int main()
{
	int k,n;
	double s;
	s=0,n=0;
	scanf("%d",&k);
	do{
		n++;
		s+=1.0/n;
	}
	while (s<=k);
	printf("%d\n",n);
	return 0;
}