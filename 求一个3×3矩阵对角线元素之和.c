# include <stdio.h>
int main()
{
int i,j,a[3][3];
int sum1 = 0,sum2 = 0; 
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
printf("请输入a[%d][%d]的值是：",i,j);
scanf("%d",&a[i][j]);
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
if(i==j)
sum1 = sum1 + a[i][j];
if(i+j==2)
sum2 = sum2 + a[i][j];
}
printf("主对角线之和dao是：%d\n副对角线之和是：%d",sum1,sum2);
return 0;
}
