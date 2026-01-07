/*Question:
Write a program create a stack using linked list. Use
push & Pop. Push will insert the entry in top of
the list. Pop will get top of the list and display.
Display will show from top to bottom.
Menu Items
1. Push
2. Pop
3. Display Stack
4. Exit*/
/*
Inserting at start ~ O(1);
Deleting at start ~ o(1)
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    int id;
    int maths;
    int Science;
    struct student *next;
}st;

int main(){
    st *head = NULL;
    int x;
    while(1){
        printf("1.Push\n2.Pop\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&x);
        if(x==1){
            st * temp = (st *)malloc (sizeof(st));
            temp->next=NULL;
            printf("Roll :");
            scanf("%d",&temp->id);
            printf("Math:");
            scanf("%d",&temp->maths);
            printf("SCI :");
            scanf("%d",&temp->Science);

            temp->next=head;
            head = temp;

        }
        else if (x==2){
            st * temp = (st *)malloc (sizeof(st));
            temp=head->next;
            head=temp;
        }
        else if(x==3){
            st* temp = head;
            while(temp->next!=NULL){
                printf("Roll :");
                printf("%d ",temp->id);
                printf("Math :");
                printf("%d ",temp->maths);
                printf("SCI :");
                printf("%d\n",temp->Science);
                temp=temp->next;
            }
            printf("Roll :");
            printf("%d ",temp->id);
            printf("Math :");
            printf("%d ",temp->maths);
            printf("SCI :");
            printf("%d\n",temp->Science);
        }
        else break;
    }
}