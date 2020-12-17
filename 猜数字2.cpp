#include <stdio.h>
#include <stdlib.h> 
#include<time.h>
 
int main(void)
{
    int rst,g;
    int guesscount;
    //用随机函数了
    srand( time(NULL) );
    printf("猜数游戏，输入-1退出.\r\nLet's go !\r\n\r\n");
    do
    {
        //生成随机数
        rst = (int)((double) rand() /(double) RAND_MAX * 100);
        //重置猜的次数
        guesscount = 0;
         
        while( 1 )
        {
            guesscount++;
            printf("猜猜是几：");
            scanf("%d",&g);
 
            if( g==-1) //如果输入的玩家数为-1，退出程序
                return 0;
 
            if(g == rst )
            {
                printf("恭喜，只用%d次就猜对了。\r\n再来一把！\r\n",guesscount);
                break;
            }
            else
            {
                if (guesscount < 10 )
                    printf("%s了,再",g > rst ? "大":"小" );
                else
                {
                    printf("看来你猜不出来了，试试下一个。\r\n");
                    break;
                }
            }
        }
    } while(1);
 
    return 0;
};