#include <stdio.h>
#define OFFSET (int)(&(((Data *)0)->d))
typedef struct Node Data ;
struct Node
{
        int a ;
        char b ;
        float c ;
        double d ;
};
int main( void )
{
        Data *A ;
        int differ = (int)(&(A->d)) - (int)(A) ;
        printf("%d",differ);
        return 0 ;
}
/*
http://www.cnblogs.com/TYH-TYH/p/8021908.html
对于结构体存储讲的比较好的一篇博客
*/
