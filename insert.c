#include<stdio.h>
int main()
{
 int arr[20]={10,20,4,3,23,67,80,97};
 int key= 90;
 int n=8;
 int capacity= sizeof(arr)/sizeof(arr[0]);
 printf("Elemens before insertion:\n");
 for(int i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 }
 
 printf("\nElements after insertion:\n");
 
 n=Insert(arr,n,key,capacity);
 for(int i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
  }
 return 0;
}




 int Insert(int arr[],int n,int key,int capacity)
{
  if(n>=capacity)
   return n;
   arr[n] = key;
    return(n+1);



}


