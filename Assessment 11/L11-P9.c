/*Question: 
Write a function to concate two integer array into single array 
Function name : intcon(src1,size1,src2,size2,dst)*/
#include <stdio.h>
void intcon(int* src1,int size1,int* src2,int size2,int* dst){
    int i = 0;
    for (i =0 ; i< size1;i++){
        dst[i]=src1[i];
    }
    for (int j = 0 ;j< size2;j++){
        dst[i+j]=src2[j];
    }
    for (i =0 ;i<(size1+size2);i++){
        printf("%d ",dst[i]);
    }

}
int main(){
    int size1;
    scanf("%d",&size1);
    int src1[size1];
    for (int i =0 ;i<size1;i++)
    scanf("%d",&src1[i]);
    
    int size2;
    scanf("%d",&size2);
    int src2[size2];
    for (int i =0 ;i<size2;i++)
    scanf("%d",&src2[i]);

    int dst[size1+size2];

    intcon(src1,size1,src2,size2,dst);
}