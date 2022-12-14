#include<stdio.h>
#include<stdlib.h>
#define clrscr();
struct bit{unsigned char j:1;};
int uset[]={1,2,3,4,5,6,7,8,9},size=9;
void main()
 {
  void readset(struct bit[],int n);
  void printset(struct bit[]);
  void unionset(struct bit[],struct bit[],struct bit[]);
  void intersect(struct bit[],struct bit[],struct bit[]);
  void difference(struct bit[],struct bit[],struct bit[]);
  struct bit a[10]={0},b[10]={0},c[10]={0};
  int n;
   printf("\nNumber of elements in set A:");
   scanf("%d",&n);
   readset(a,n);
   printf("\nNumber of elements in set B:");
   scanf("%d",&n);
   readset(b,n);
   clrscr();
   printf("\nSET A :");
   printset(a);
   printf("\nSET B:");
   printset(b);
   unionset(a,b,c);
   printf("\nA union B =");
   printset(c);
   intersect(a,b,c);
   printf("\nA intersection B =");
   printset(c);
   difference(a,b,c);
   printf("\nA-B =");
   printset(c);
 }
void readset(struct bit a[],int n)
 {
  int i,j,k;
  printf("\nenter the elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("\n%d",&j);
    for(k=0;k<size;++k)
    if(uset[k]==j)
    {
     a[k].j=1;
     break;
    }
  }
  return;
 }
void printset(struct bit a[])
 {
  int i;
  printf("{");
  for(i=0;i<size;++i)
  if(a[i].j==1)
  printf("%d,",uset[i]);
  printf("}\n");
  return;
 }
void unionset(struct bit a[],struct bit b[],struct bit c[])
 {
   int i;
   for(i=0;i<size;++i)
   c[i].j=a[i].j|b[i].j;
   return;
 }
void intersect(struct bit a[],struct bit b[],struct bit c[])
 {
  int i;
  for(i=0;i<size;++i)
  c[i].j=a[i].j&b[i].j;
  return;
 }
void difference(struct bit a[],struct bit b[],struct bit c[])
 {
   int i;
   for(i=0;i<size;++i)
   if(a[i].j==1)
   c[i].j=a[i].j^b[i].j;
   return;
}
  


