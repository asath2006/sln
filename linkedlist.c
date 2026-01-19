#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL;
void append(int data)
{
    struct node*nn=(struct node*)malloc(sizeof(struct node));
    nn->data=data;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
    }
    else{
        struct node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nn;
    }
}
void display()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&d);
        append(d);
    }
    display();
}