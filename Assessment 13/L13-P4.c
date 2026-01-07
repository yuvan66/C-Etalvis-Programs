/*Question:
Create a doubly linked list with about 5
entries using the following structure.
Insert a new entry before or after a given
id. Delete an entry of a given id.
Menu Items
1. Insert Entry
2. Delete Entry
3. Display List
4. Exit*/
#include <stdio.h>
#include <stdlib.h>
typedef struct student {
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
}st;
int main(){
    st* head =(st *)malloc(sizeof(st));
    head->next=NULL;
    st * temp;
    while(1){
        printf("1.ENTER AN ELEMENT\n2.INSERT AN ELEMENT\n3.DELETE\n4.DSIPLAY\n5.EXIT\n");
        int x;
        scanf("%d",&x);
        if (x==1){
            st * newnode =(st *)malloc(sizeof(st));
            printf("Enter the roll :");
            scanf("%d",&newnode->id);
            printf("Enter the Math :");
            scanf("%d",&newnode->Maths);
            printf("Enter the Sci :");
            scanf("%d",&newnode->Science);
            if(head->next ==NULL){
                newnode->prev=head;
                head->next=newnode;
            }
            else {
                temp = head->next;
                while(temp->next!=NULL){
                    temp= temp->next;
                }
                newnode->prev=temp;
                temp->next=newnode;
            }
        }
        else if(x==2){
            st * newnode =(st *)malloc(sizeof(st));
            temp= head->next;
            printf("Enter the roll :");
            scanf("%d",&newnode->id);
            int y=newnode->id;
            printf("Enter the Math :");
            scanf("%d",&newnode->Maths);
            printf("Enter the Sci :");
            scanf("%d",&newnode->Science);
            newnode->next = NULL;
            newnode->prev = NULL;
            while(temp->next!=NULL){
                if((temp->id)<y &&(temp->next->id)>y){
                    newnode->next=temp->next;
                    newnode->prev=temp;
                    temp->next->prev=newnode;
                    temp->next=newnode;
                    break;
                } 
                temp=temp->next;
            }
        }
        else if (x==3){
            int y ;
            printf("Enter the element :");
            scanf("%d",&y);
            temp = head;
            while(temp->next!=NULL){
                if(y==temp->next->id){
                    if (temp->next->next != NULL)
                        temp->next->next->prev = temp;
                        temp->next = temp->next->next;
                        break;
                }
                temp = temp->next;
            }
        }
        else if(x==4){
            temp = head;
            while(temp->next!=NULL){
                printf("%d ",temp->id);
                printf("%d ",temp->Maths);
                printf("%d\n",temp->Science);
                temp= temp->next;
            }
                printf("%d ",temp->id);
                printf("%d ",temp->Maths);
                printf("%d",temp->Science);
        }
        else break;
    }
}