#include <stdio.h>
int main( void )
{
        int b = 3 - 4 ;
        char a[b] ;
        printf("%d",sizeof(a)) ;
        return 0 ;
}
//因为变长数组的大小在运行时才确定，所以当数组的大小为-1时 会转换成unsigned类型 也就是2^32-1。显然这是一个极大的安全隐患。
