#include<stdio.h>
int main()
{
 int arr[]={10,20,4,3,23,67,80,97};
 int key= 23;
 int n= sizeof(arr)/sizeof(arr[0]);
 int pos=search(arr,n,key);
 if (pos==-1)
  printf("Element not present in array\n");
 else
  printf("Element present at index:- %d\n",pos);
 return 0;
}

int search(int arr[],int n,int key)
{
 for(int i=0;i<n;i++)
  if(key==arr[i])
     return i;
 
return -1;
}



