#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{   char text[100];
    int len;
	 printf("������һ����ĸ\n"); 
     gets(text);
     len =strlen(text);
    
     for(int i=0;i<=len;i++){      
        if(text[i]!='!'){ 
        if(text[i]>='a'&&text[i]<='z'){
            text[i]=text[i]-32; 
        }
        else if(text[i]>='A'&&text[i]<='Z')
            text[i]=text[i]+32;
        }
        else
            break;
     }
    printf("ת������ַ���Ϊ%s!\n",text);
    return 0;
}
 
