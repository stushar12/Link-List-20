#include<stdio.h>
#include<stdlib.h>
#include<string.h>        //finding middle node in a link list in one traversal
struct node
{
  int data;
  struct node *next;
};
struct node * create()
{
  struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
char str1[10];
printf("\n Enter yes or no\n");
scanf("%s",str1);
if(strcmp(str1,"no")==0)
break;
else
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter a value ");
scanf("%d",&temp->data);
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
    p=temp;
    q=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
}
return q;
}
void check(struct node *p)
{
  struct node *q=p;
  while(p!=NULL)
  {
    p=p->next->next;
    q=q->next;
    if(p->next==NULL)
    {
      printf("%d\n",q->data);
      break;
    }
    else if(p->next->next==NULL)
    {
      printf("%d\n",q->next->data);
    break;
  }
}
}
int main()
{
  struct node *p;
  p=create();
  check(p);
}
