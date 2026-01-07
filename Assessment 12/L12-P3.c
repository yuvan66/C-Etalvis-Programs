/*Question: Get a main string and substring. Check the sub-string in the main string and print the position.

Example:

string: helloetalvislearning

sub-string: etal*/



#include <stdio.h>
#include <string.h>
int sliceString(char * name,char *ss){
    int j =0 ;
    for(int i =0 ;name[i]!='\0';i++){
        for (j =0 ; ss[j]!='\0';j++){
            if(name[i+j]!=ss[j]){
                break;
            }
            
        }
        if(ss[j]=='\0'){
                
                return i+1;
            }
    }
}
int main(){
    char name[30];
    fgets(name,30,stdin);
    name[strcspn(name,"\n")]='\0';
    char ss[30];
    fgets(ss,30,stdin);
    ss[strcspn(ss,"\n")]='\0';
    int y = sliceString(name,ss);
    printf("%d",y);
}