/*Question: Write a function to find the two-digit odd numbers whose sum of digits is 7. Print the results in main function.

Function Name: find_2digit_odd_sum7

Answer: 25, 43, 61*/
#include <stdio.h>
int find_2digit_odd_sum7(int* y){
    int temp = (*y )/10;
    int rev = (*y )%10;
    if ((*y)%2==1 && (temp+ rev==7)){
    return *y;
    }
    else return 0;
}
int main(){
    int x=10;
    int* y = &x;
    int n= 1;
    int result[n];
    while((*y)<70){
        if(find_2digit_odd_sum7(y)){
            result[n-1]= *y;
            *y=*y+1;
            n++;
        }
        else {
            *y=*y+1;
            continue;
        }
    }
    for (int i=0 ;i<n-1;i++){
        printf("%d ",result[i]);
    }
}