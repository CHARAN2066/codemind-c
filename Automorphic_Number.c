#include<stdio.h>
int main()
{
    int n,r,d=0,i,j;
    scanf("%d",&n);
    int a=n*n;
    int temp=a;
    int temp2=n;
    int num;
    while(n)
    {
        r=n%10;
        d++;
        n=n/10;
    }
    int arr[d];
    for(i=0;i<d;i++)
    {
        r=temp%10;
        arr[i]=r;
        temp=temp/10;
    }
    for(j=d-1;j>=0;j--)
    num=num*10+arr[j];
    //printf("%d",num);
    if(num==temp2)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
    return 0;
}