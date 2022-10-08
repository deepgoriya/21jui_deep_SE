#include<stdio.h>
long int fecto(long int no)
{
    if(no<=1)
    return 1;
    return no*fecto(no-1);
}
int main()
{
    int no=5;
    printf("%ld",fecto(no));
}
