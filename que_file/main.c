#include <stdio.h>
#include <stdlib.h>
 struct inputs
   {
   int a,b,c;
   };
void main()
{
   FILE *fin;
   FILE *fout;
   int cases,i,add,sub1,sub2,div1,div2,mul;
   fin = fopen("input.txt","r");
   fscanf(fin,"%d",&cases);
   printf("Number of cases are=%d\n",cases);
   struct inputs n[cases];
   for(i=1;i<=cases;i++)
   {
       fscanf(fin,"%d%d%d",&n[i].a,&n[i].b,&n[i].c);
   }
   for(i=1;i<=cases;i++)
   {
       printf("Numbers are=%d\n%d\n%d\n",n[i].a,n[i].b,n[i].c);
   }
      fout=fopen("output.txt","w");
    for(i=1;i<=cases;i++)
  {
            add=n[i].a+n[i].b;
            sub1=n[i].a-n[i].b;
            sub2=n[i].b-n[i].a;
            mul=n[i].a*n[i].b;
            div1=n[i].a%n[i].b;
  div2=n[i].b%n[i].a;
if(add==n[i].c||sub1==n[i].c||sub2==n[i].c||mul==n[i].c||div1==n[i].c||div2==n[i].c)
{

  fprintf(fout,"It is possible\n");
}
else
{
     //fout=fopen("output.txt","w");
    fprintf(fout,"It is not possible\n");
}

  }

fclose(fin);
fclose(fout);
}


