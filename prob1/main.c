#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,b,c,cases,add,sub1,sub2,mul,div1,div2,i;
 printf("enter the no. test of cases \n") ;
  scanf("%d",&cases);
  for(i=0;i<cases;i++)
  {
  printf("enter two inputs\n") ;
  scanf("%d%d",&a,&b);
  printf("enter the third element\n");
  scanf("%d",&c);
  add=a+b;
  sub1=a-b;
  sub2=b-a;
  mul=a*b;
  div1=a%b;
  div2=b%a;
 if(add==c)
 {
     printf("It is possible\n");
 }
 else if(sub1==c)
 {
     printf("It is possible\n");
 }
 else if(sub2==c)
 {
     printf("It is possible\n");
 }
 else if(mul==c)
 {
     printf("It is possible\n");
 }
 else if(div1==c)
 {
   printf("It is possible\n");
 }
 else if(div2==c)
 {
     printf("It is possible\n");
 }
 else
 {
     printf("it is not possible");
 }
 }

 }





