#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int nAppValue, nUserValue, iCount = 0;
    srand( time( 0 ) );
    nAppValue = rand() % 100 + 1;
    printf( "�����ѡ�е����ĸ�����(1-100)?\n" );
    do
    {
        scanf( "%d", &nUserValue );
        ++iCount;
        if( nUserValue == nAppValue )
        {
            printf( "����%d��, �����ˣ�\n",iCount );
            break;
        }
        else if( nUserValue > nAppValue )
        {
            printf( "���ˣ���С��, �����£�\n" );
        }
        else
        {
            printf( "���ˣ��ٴ�㣡�����£�\n" );
        }
    }while(1);
    printf( "��Ϸ������\n" );
    return 0;
}