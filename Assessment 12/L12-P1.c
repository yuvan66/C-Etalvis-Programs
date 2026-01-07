/*Question:

Get two numbers of up to 50 digits and perform addition and print the result.*/


#include <stdio.h>
#include <string.h>
void getnumbers(char * number1,char * number2){

    fgets (number1,50,stdin);
    number1[strcspn(number1,"\n")]='\0';
    fgets (number2,50,stdin);
    number2[strcspn(number2,"\n")]='\0';
}

void addnumbers(char * number1,char * number2,char * result){
    int n1 = strlen(number1)-1;    
    int n2 = strlen(number2)-1;
    int max = n1>n2 ? n1:n2;
    int carry =0;
    result[max+1]='\0';
    for (;n1>=0 || n2>=0 ;max--){
        int a=0 ;
        int b=0 ;
        if(number1[n1]>='0' && number1[n1]<='9') a= number1[n1]-'0';
        if(number2[n2]>='0' && number2[n2]<='9') b= number2[n2]-'0';
        int sum = a+b+carry;
        result[max] = (sum%10 )+'0';
        carry = sum/10;
        n1--;
        n2--;
    }
}
void print(char * result){
    
    printf("%s",result);
}
int main(){
    char number1[50],number2[50],result[51]={0};
    getnumbers(number1,number2);
    addnumbers(number1,number2,result);
    print(result);
}