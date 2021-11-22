#include <stdio.h>
#include<stdlib.h>

void insert_beg();
void insert_end();
void insert_mid();
void del_beg();
void del_middle();
void del_end();
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
}*head;
int main()
{
    int n,i,choice;
    struct node *head=NULL;
    while(1)
    {
        
    printf("enter the choice  1.insert beg 2.insert middle after value  3.insert end   4.delete beg  5.delete middle with value  6.delete end");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        insert_beg();
        break;
        case 2:
        insert_mid();
        break;
        case 3:
        insert_end();
        break;
        case 4:
        del_beg();
        break;
        case 5:
        del_middle();
        break;
        case 6:
        del_end();
        break;
        default :
        printf("error");
        break;
    }
    }
    
}   
    
    
    
    

void insert_beg()
{
    int x;
    printf("\nenter the data to be inserted at beginning");
     scanf("%d",&x);
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

temp=head;
while(temp!=NULL)
{
    printf("%d\n",temp->data);
    temp=temp->next;    
}


}
void insert_end()
{
    int x;
    struct node *t=head;
    struct node*temp=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the element to be inserted at end");
    scanf("%d",&x);
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
    temp->prev=t;
    
    t=head;
while(t!=NULL)
{
    printf("%d\n",t->data);
    t=t->next;    
}


}
void insert_mid()
{
    int x,y;
    struct node *t=head;
    struct node*temp=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the element to be inserted at middle");
    scanf("%d",&x);
    printf("\nenter the value after to print");
    scanf("%d",&y);
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    while(t->data!=y)
    {
        t=t->next;
        
        
    }
    temp->next=t->next;
    temp->prev=t;
    t->next->prev=temp;
    t->next=temp;
    
    t=head;
    while(t!=NULL)
{
    printf("%d\n",t->data);
    t=t->next;    
}
    
    
}
void del_beg()
{
  struct node *temp=head;
  struct node *t=head;
  if(head==NULL)
  {
      printf("list is empty");
  }
  else if(head->next==NULL)
  {
      free(head);
      head=NULL;
  }
  else{
 
 
    temp=head;
     head=head->next;
      head->prev=NULL;
     free(temp);
     temp=NULL;
  }
  
  t=head;
 
 
while(t!=NULL)
{
    printf("%d\n",t->data);
    t=t->next;    
}
}
void del_end()
{
    struct node*temp=head;
    struct node*ptr=head;
    if(head==NULL)
  {
      printf("list is empty");
  }
  else if(head->next==NULL)
  {
      free(head);
  }
  else{
  
    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
    temp->prev=NULL;
    free(temp);
  }
  
  ptr=head;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;    
}
  
    
}
void del_middle()
{
    struct node*temp=head;
    struct node*ptr=head;
    int x;
    printf("\nenter the data to be deleted");
    scanf("%d\n",&x);
     if(head==NULL)
  {
      printf("list is empty");
  }
  while(temp->data!=x)
  {
      if(temp->next==NULL)
      {
          printf("error");
      }
      else
      {
          ptr=temp;
          temp=temp->next;
      }
  }
  if(temp==head)
  
  {
      temp=temp->next;
      head->prev=NULL;
  }
  else
  {
      ptr->next=temp->next;
      temp->next->prev=temp->prev;
  }

  
   ptr=head;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;    
}
  
    
}


/* OUTPUT
enter the choice  1.insert beg 2.insert middle after value  3.insert end   4.delete beg  5.delete middle with value  6.delete end1

enter the data to be inserted at beginning1
1
enter the choice  1.insert beg 2.insert middle after value  3.insert end   4.delete beg  5.delete middle with value  6.delete end1

enter the data to be inserted at beginning2
2
1
enter the choice  1.insert beg 2.insert middle after value  3.insert end   4.delete beg  5.delete middle with value  6.delete end3

enter the element to be inserted at end3
2
1
3
enter the choice  1.insert beg 2.insert middle after value  3.insert end   4.delete beg  5.delete middle with value  6.delete end4
1
3
enter the choice  1.insert beg 2.insert middle after value  3.insert end   4.delete beg  5.delete middle with value  6.delete end*/





