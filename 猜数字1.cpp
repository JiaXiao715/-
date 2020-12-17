#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int nAppValue, nUserValue, iCount = 0;
    srand( time( 0 ) );
    nAppValue = rand() % 100 + 1;
    printf( "请猜我选中的是哪个数字(1-100)?\n" );
    do
    {
        scanf( "%d", &nUserValue );
        ++iCount;
        if( nUserValue == nAppValue )
        {
            printf( "猜了%d次, 猜中了！\n",iCount );
            break;
        }
        else if( nUserValue > nAppValue )
        {
            printf( "错了！再小点, 继续猜！\n" );
        }
        else
        {
            printf( "错了！再大点！继续猜！\n" );
        }
    }while(1);
    printf( "游戏结束！\n" );
    return 0;
}