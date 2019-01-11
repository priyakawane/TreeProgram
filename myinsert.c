#include<stdio.h>

int Insert(int arr[],int n,int pos,int key)
{
 /*
 arr[n]=key;
  return (n+1);
*/
for(int i=n;i>pos;i--)
{
  arr[i+1]=arr[i];
}
  arr[pos-1]=key;
  n++;

}


int main()
{
 int arr[]={10,20,30,40,50,60};
 int n= sizeof(arr)/sizeof(arr[0]);
 int pos=4;
 int key=90;
 Insert(arr,n,pos,key); 
 //int m=Insert(arr,n,pos,key);
 for(int i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 }


 return 0;
}


