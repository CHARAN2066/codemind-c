/*              *BINEARY SEARCH*
algorithm which is used to find a key in a sorted data
binary search only works on sorted data (ascending order)
ALGORITHM
1.take 2 variables called low ans high
2.set low to 0 and high to length-1
3.run a loop as long as low < high
4.compute a value called mid=(low+high)/2
5.case1 (arr[mid]==key)
return mid
case2 (arr[mid]>key)
set high to mid
case3 (arr[mid]<key)
set low to mid*/
#include<stdio.h>
int bineary_search(int *arr,int n,int key)
{
	int i,low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
		return mid;
		break;
	    }
		else if(arr[mid]>key)
		high=mid-1;
		else 
		low=mid+1;
	}
	return -1;	
}
int bineary_search_rec(int *arr,int n,int t,int l,int h)
{
	if(l>h)
	return -1;
	else
	{
		int mid=(l+h)/2;
		if(arr[mid]==t)
		return mid;
		else if(arr[mid]>t)
		return bineary_search_rec(arr,n,t,l,h-1);
		else 
		return bineary_search_rec(arr,n,t,l+1,h);
	}
}
int main()
{
	int n,t,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&t);
	printf("%d\n",bineary_search(arr,n,t));
	printf("%d",bineary_search_rec(arr,n,t,0,n-1));
	return 0;
}



