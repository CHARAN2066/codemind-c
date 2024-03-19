#include<stdio.h>
int self(int a)
{
    int r;
    int flag=1;
    int temp=a;
    while(a>0)
    {
        r=a%10;
        if(r==0)
        {
            flag=0;
            break;
        }
        else if(temp%r!=0)
        {
            flag=0;
            break;
        }
        a=a/10;
    }
    return flag;
}
int main()
{
    int l,r;
    scanf("%d
%d",&l,&r);
    //printf("%d",self(6));
    for(int i=l;i<=r;i++)
    {
        if(self(i)==1)
        printf("%d ",i);
    }
    return 0;
}