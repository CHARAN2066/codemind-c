/*                 INSERTION SORT
ALGORITHM:
STEP1:run a loop on array from index 1 to index n-1(inclusive) using a variable i
STEP2:take 2 variables called as key ,j and set key to a[i],j to i-1
STEP3:run a loop as long as j>=0 && a[j]>key
STEP4:Inside this loop
a[j+1]=A[j]
decrement j (j--)
STEP5:After coming out of the inner loop set A[j+1]=key */
#include<stdio.h>
int* insertion_sort(int *arr,int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		for(j=i-1;(j>=0)&&(arr[j]>key);j--)
		arr[j+1]=arr[j];
		arr[j+1]=key;
	}
	return arr;
}
int main()
{
	int arr[5]={5,4,2,1,3},i;
	insertion_sort(arr,5);
	for(i=0;i<5;i++)
	printf("%d ",arr[i]);
	return 0;
}
