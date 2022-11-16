#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *sp=(struct node *)0;
void push(int item)
{
struct node *t;
t=(struct node *)malloc(sizeof (struct node));
t->data=item;
t->next=sp;
sp=t;
return;
}
int pop(int *status)
{
struct node *t;
int item;
if(sp==(struct node *)0)
{
printf("empty stack");
*status=0;
}
else
{
item=sp->data;
t=sp;
sp=sp->next;
free(t);
*status=1;
return item;
}
}
int search(int item)
{
struct node *t=sp;
int count=0;
while(t!=(struct node *)0)
{
++count;
if(t->data==item)
return count;
else
t=t->next;
}
return 0;
}
int main()
{
int item,opt,ans,status;
do
{
printf("\n1.push");
printf("\n2.pop");
printf("\n3.search");
printf("\n4.exit");
printf("\nenter your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("\ndata:");
scanf("%d",&item);
push(item);
printf("\ninterted %d",item);
break;
case 2:item=pop(&status);
if(status==1)
printf("\ndeleted %d",item);
break;
case 3:printf("\ndata to search:");
scanf("%d",&item);
ans=search(item);
if(ans==0)
printf("\ndata is not found");
else
printf("\ndata is found at %d node",ans);
break;
case 4:exit(0);
break;
}
}
while(1);
}
