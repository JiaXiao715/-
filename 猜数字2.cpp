#include <stdio.h>
#include <stdlib.h> 
#include<time.h>
 
int main(void)
{
    int rst,g;
    int guesscount;
    //�����������
    srand( time(NULL) );
    printf("������Ϸ������-1�˳�.\r\nLet's go !\r\n\r\n");
    do
    {
        //���������
        rst = (int)((double) rand() /(double) RAND_MAX * 100);
        //���òµĴ���
        guesscount = 0;
         
        while( 1 )
        {
            guesscount++;
            printf("�²��Ǽ���");
            scanf("%d",&g);
 
            if( g==-1) //�������������Ϊ-1���˳�����
                return 0;
 
            if(g == rst )
            {
                printf("��ϲ��ֻ��%d�ξͲ¶��ˡ�\r\n����һ�ѣ�\r\n",guesscount);
                break;
            }
            else
            {
                if (guesscount < 10 )
                    printf("%s��,��",g > rst ? "��":"С" );
                else
                {
                    printf("������²������ˣ�������һ����\r\n");
                    break;
                }
            }
        }
    } while(1);
 
    return 0;
};