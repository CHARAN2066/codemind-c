#include<stdio.h>
int main()
{
    int a,i,n,c=0,l=0,k,j;
    scanf("%d",&n);
    int arr[n];
    int res[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(j=0;j<n;j++)//1 1 0 1 1 
    {
        if(arr[j]==1)
        {
            k=j;
            while(arr[k]==1)
            {
                c++;
                k++;
            }
        }
        res[l]=c;
        l++;
        c=0;
    }
    int max=res[0];
    for(a=0;a<l;a++)
    {
        if(max<res[a])
        max=res[a];
    }
    printf("%d",max);
    return 0;
}