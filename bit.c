#include<stdio.h>
int main()
{
    int data[20],stuffed_data[30],i,j,count=0,n;
    printf("Enter the N value");
    scanf("%d",&n);
    printf("Enter the data:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    for(i=0;i<n;i++)
    {
        stuffed_data[j]=data[i];
        if(data[i]==1)
        {
            count++;
        }
        else
        {
            count=0;
        }
        j++;
        if(count==5)
        {
            stuffed_data[j]=0;
            j++;
            count=0;
        }
    }
    printf("stuffed_data:");
    for(i=0;i<j;i++)
    {
        printf("%d",stuffed_data[i]);
    }
    printf("\n");
    return 0;
}
