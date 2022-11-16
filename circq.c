#include<stdio.h>
#include<stdlib.h>
#define size 5
int q[size];
int rear=0,front=0;
int insertq(int item)
{
int r1=rear;
r1=(r1+1)%size;
if(r1==front)
printf("queue is full");
else
{
rear=r1;
q[rear]=item;
}
}
int deleteq1(int *status)
{
if(front==rear)
{
printf("queue is empty");
*status=0;
}
else
{
front=(front+1)%size;
*status=1;
return q[front];
}
}
int searchq(int item)
{
int t;
t=front;
if(front!=rear)//if queue not empty
{
t=(t+1)%size;
while(t!=rear&&q[t]!=item)
t=(t+1)%size;
if(q[t]==item)
return t+1;
else
return 0;
}
else
return 0;
}
void main()
{
int item,opt,ans,status;
do
{
printf("\n1.insert\n");
printf("2.delete\n");
printf("3.search\n");
printf("4.exit\n");
printf("enter your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("\ndata:");
scanf("%d",&item);
insertq(item);
break;
case 2:item=deleteq1(&status);
if(status==1)
printf("\ndeleted data is %d",item);
break;
case 3:printf("\nitem to search:");
scanf("\n%d",&item);
ans=searchq(item);
if(ans==0)
printf("\ndata is not found");
else
printf("\nfound at %d position",ans);
break;
case 4:exit(0);
}
}
while(1);
}
