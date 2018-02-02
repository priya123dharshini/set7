#include<stdio.h>
void main()
{
 int n1,n2;
 printf("enter n1 and n2");
 scanf("%d %d",&n1,&n2);
 n1-=n2;
 if(n1%2==0)
 {
  printf("the result is even");
 }
 else
{
 printf("the result is odd");
}

}
