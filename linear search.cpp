#include<stdio.h>
int linear_search(int *arr,int n,int k)
{
	if(n<0)
	return -1;
	else if(arr[n]==k)
	return n;
	else 
	return linear_search(arr,n-1,k);
}
int linear_search_it(int *arr,int n,int k)
{
	int i,ans=-1;
	for(i=0;i<n;i++)
    {
    	if(arr[i]==k)
    	ans=i;
	}
	return ans;
}
int main()
{
	int n,i,k;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&k);
	int ans=linear_search(arr,n,k);
	if(ans!=-1)
	printf("%d is found at %d",k,ans);
	else
	printf("Key is not found");
	return 0;
}
