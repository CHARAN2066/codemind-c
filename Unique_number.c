#include<stdio.h>
int main()
{
    int n,r,i=0,flag=1;
    scanf("%d",&n);
    int arr[10];
    while(n)
    {
        r=n%10;
        arr[i]=r;
        n=n/10;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(arr[j]==arr[k])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}