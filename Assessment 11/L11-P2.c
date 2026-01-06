/*Question:

Pass an integer array to a function and increment each array element inside the function.*/
#include <stdio.h>
int inc(int* a,int n){
    for (int i =0 ; i<n;i++){
        a[i]++;
    }
    return *a;
}
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    for (int i = 0 ;i<n ;i++){
        scanf("%d",&a[i]);
    }
    int y = inc(a,n);
    
    for (int i =0 ; i<n;i++){
        printf("%d ",a[i]);
    }
}