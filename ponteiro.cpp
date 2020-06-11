#include <stdio.h>

int main()
{

    int x, *px, *py;
    x = 9 ;
    px = &x;
    py = px;
    printf("x = %d\n",x);
    printf("&x = %d\n", &x);
    printf("px = %d\n", px);
    printf("*px = %d\n", *px);
    printf("*py = %d\n", *py);

    return(0);
}