#include<stdio.h>
int print(int *arr,int n)
{
	if(n==0)
	return arr[0];
	else
	return arr[n]+print(arr,n-1);
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int ans=print(arr,n-1);
	printf("%d",ans);
	return 0;
}