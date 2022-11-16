#include<stdio.h>
void main()
{
int n1,n2,ar1[20],ar2[20],ar3[40];
void read_array(int[],int);
void print_array(int[],int);
void merge(int[],int[],int[],int,int);
printf("number of elements in first array[1-20]:");
scanf("%d",&n1);
printf("enter the elments in non decreasing order:");
read_array(ar1,n1);
printf("number of elements in second array[1-20]:");
scanf("%d",&n2);
printf("enter the elments in non decreasing order:");
read_array(ar2,n2);
merge(ar1,ar2,ar3,n1,n2);
printf("merged array is:\n");
print_array(ar3,n1+n2);
}
void read_array(int arr[],int x)
{
int i;
for(i=0;i<x;++i)
scanf("%d",&arr[i]);
return;
}
void print_array(int arr[],int y)
{
int i;
for(i=0;i<y;++i)
printf("%d\n",arr[i]);
}
void merge(int a[],int b[],int c[],int m,int n)
{
int i=0,j=0,k=0;
while(i<m && j<n)
if(a[i]<b[j])
{
c[k++]=a[i++];
}
else
{
c[k++]=b[j++];
}
while(i<m)
c[k++]=a[i++];
while(j<n)
c[k++]=b[j++];
}
