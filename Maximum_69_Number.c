#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='6')
        {
            str[i]='9';
            break;
        }
    }
    printf("%s",str);
}