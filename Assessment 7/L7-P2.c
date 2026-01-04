#include<stdio.h>
void disp_descend();
int main()
{
    int x=5;
    disp_descend(x);
}
void disp_descend(int x)
{
    while(x>0)
    {
        printf("%d\n",x);
        x--;
    }
}
