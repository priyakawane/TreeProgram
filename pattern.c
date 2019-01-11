#include<stdio.h>
//pattern to print *****
/*
int main()
{
 int i,n=6;
 for(int i=0;i<n;i++)
 {
  printf("*\n");
 }

return 0;
}
*/
/*
int main()
{
 int i,j,n=4;
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;++j)
  {
    printf("*\t");
  }
  printf("\n");
  
 }
 return 0;
}
*/

int main()
{
 int i,j,n=4;
 for(i=0;i<n;i++)
 {
  for(j=0;j<=i;j++)
  {
    printf("*\t");
  }
  printf("\n");
  
 }
 return 0;
}
