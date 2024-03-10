#include<stdio.h>
#include<math.h>
int main()
{
    int n,ans=0,c=1,a,j,k,i,l;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(j=0;j<n;j++)
    {
        if(arr[j]!=-1)
        {
        for(k=j+1;k<n;k++)
        {
            if(arr[j]==arr[k])
            c++;
        }
        for(l=j+1;l<n;l++)
        {
            if(arr[j]==arr[l])
            arr[l]=-1;
        }
        ans+=floor(c/2);
        c=1;
        }
    }
    /*for(a=0;a<n;a++)
    printf("%d",arr[a]);*/
    printf("%d",ans);
    return 0;
}