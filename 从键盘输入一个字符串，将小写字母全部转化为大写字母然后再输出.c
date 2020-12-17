#include<stdio.h>
int main()
{ int i=1;
char m;
printf("ÇëÊäÈëÒ»´®×Ö·û:");
while(1)
{m=getchar();
if(m=='#'||i>10)
break;
else if(m>=97&&m<=122)
printf("%c",m-32);
else
printf("%c",m);
i++;}
return 0;
}
