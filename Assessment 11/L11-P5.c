/*Question: 
Write a function too copy the integers from one locations to another location.
funtion name : memcopy(src,des,size)
*/
/* -> int* a and -> int* b are pointer over here and base address are passed as parameters in my program 
Conclusion : I have used pointer in this program but as an indirect method */
#include<stdio.h>
void memcopy(int* a,int* b,int n){
    for (int i =0 ;i<n;i++){
        b[i]=a[i];
        printf("Copied - %d\n",b[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i =0 ;i<n ;i++)
       scanf("%d",&a[i]);
    memcopy(a,b,n);
}