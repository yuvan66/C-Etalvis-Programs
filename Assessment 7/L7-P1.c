#include<stdio.h>
void disp_assend();
int main()
{
    int x=1;
    disp_assend(x);
}
void disp_assend(int x)
{
    while(x<6)
    {
        printf("%d\n",x);
        x++;
    }
} 