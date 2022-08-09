#include<stdio.h>
#include<stdlib.h>

int * mult(int ar[], int len)
{
    int mul;
    int *res;
    res=(int *)malloc(len*sizeof(int));
    for(int i=0;i<len;i++)
    {
        mul=1;
        for(int j=0;j<len;j++)
        {
            if(j==i)
            {
                continue;
            }
            else
            {
            mul=mul*(ar[j]);
            }
        }
        res[i]=mul;
    }
    return (res);
    free(res);
}

int main()
{
    //hardcoding the values
    int *p;
    int ar[10]={1, 2, 3, 4, 5}; //list of numbers
    printf("\nThe list: 1, 2, 3, 4, 5");
    p=mult(ar,5);
    printf("\nThe array: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}
