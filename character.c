
#include<stdio.h>
#include<string.h>
int main()
{
    char start='!',end='!',escape='\\',is[100],ss[100];
    int i,j=0;
    printf("ENTER THE INPUT STRING:");
    scanf("%s",is);
    ss[j++]=start;
    for(i=0;i<strlen(is);i++)
    {
        if(is[i]==start||is[i]==end||is[i]==escape)
        {
            ss[j++]=escape;
        }
        ss[j++]=is[i];
    }
    ss[j++]=end;
    ss[j]='\0';
    printf("The stuffed string:%s",ss);
    return 0;
}
