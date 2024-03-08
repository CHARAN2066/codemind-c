#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            for(int j=i+1;j<n;j++)
            {
                if((str[j]!='a')&&(str[j]!='e')&&(str[j]!='i')&&(str[j]!='o')&&(str[j]!='u'))
                {
                    printf("V");
                    i=j-1;
                    break;
                }
            }
        }
        else
        {
            for(int j=i+1;j<n;j++)
            {
                 if((str[j]=='a')||(str[j]=='e')||(str[j]=='i')||(str[j]=='o')||(str[j]=='u'))
                {
                    printf("C");
                    i=j-1;
                    break;
                }
            }
            
        }
    }
    if((str[n-1]=='a')||(str[n-1]=='e')||(str[n-1]=='i')||(str[n-1]=='o')||(str[n-1]=='u'))
    printf("V");
    else
    printf("C");
    return 0;
}