#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[1000];
    char c;
    scanf("%[^
]s",str);
    int n=strlen(str);
    scanf("
%c",&c);
    for(int i=0;i<n;i++)
    {
        if(c==str[i])
        count++;
    }
    if(count!=0)
    printf("%d",count);
    else
    printf("-1");
    return 0;
}