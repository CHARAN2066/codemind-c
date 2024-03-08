#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int fre[100]={0};
    int c=0;
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(arr[j]==arr[k])
                c++;
        }
        fre[arr[j]]=c;
        c=0;
    }
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if((fre[arr[i]]==1)&&(max<arr[i]))
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}
