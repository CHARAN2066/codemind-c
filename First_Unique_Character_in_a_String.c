#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,flag=0;
    char str[1000];
    scanf("%[^
]s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(str[i]==str[j])
            c++;
        }
        if(c==1)
        {
            flag=1;
            printf("%d",i);
            break;
        }
        c=0;
    }
    if(flag==0)
    printf("-1");
    return 0;
}