#include <_stdio.h>
void block(int n);
int main (void)
{
    printf("Hello\n");
    block(5);
    return 0;
}
void block(int n)
{
    if(n<=0)
    {
        return;
    }
    block(n-1);
    for(int i=0;i<n;i++)
    {
        printf("# ");
    }
    printf("\n");
}