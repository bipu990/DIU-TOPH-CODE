#include <stdio.h>
int main ()
{
    int x,y,z;
    scanf ("%d %d %d",&x,&y,&z);
    
    int m = x*y;
    int n = m-z;
    
    printf ("%d\n",n);
    
    return 0;
}
