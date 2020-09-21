#include <stdio.h>
#include <stdlib.h>

int main()
{
void printarray(int arr[],int n){
for(int i=0;i<n;++i){
   printf("%d-->",arr[i]);
   }
   printf("\n");}


int myswap (int arr[],int f,int s){
int temp=arr[f];
arr[f]=arr[s];
arr[s]=temp;
}


   void heapify (int arr[],int n,int i){
   int largest=i;
   int l=i*2+1;
   int r=i*2+2;

   if(l<n && arr[largest]<arr[l]){
   myswap(arr,l,largest);
   largest=l;
   }

   if(r<n && arr[largest]<arr[r]){
   myswap(arr,r,largest);
   largest=r;
   }

   }
   void heapsort(int arr[],int n){
   for(int y=n;y>0;y--){
   //printf("\n%d\n",y);
   for(int i=y/2-1;i>=0;i--){
   //printf("%d\n",i);
   heapify(arr,y,i);
   }
   myswap(arr,0,y-1);

   }

   }


   void publesort(int arr[],int n){
   int check=0;
   while(check==0){
   check=1;
   for(int i=n-1;i>=1;--i){
   if(arr[i]<arr[i-1]){
   myswap(arr,i-1,i);
   check=0;}
   }
   }
   }


   int arr[]={6,23,1,70,3,49,2,0};
   printf("the origin array is:  ");
   printarray(arr,8);
   publesort(arr,8);
   //heapsort(arr,6);
   printf("\n after heap sorting: ");
   printarray(arr,8);

    return 0;
}
