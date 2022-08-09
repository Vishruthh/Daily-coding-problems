//Given a list of numbers and a number k, return whether any two numbers from the list add up to k
#include<stdio.h>

void sumpair(int ar[], int k, int siz)
{
    for(int i=0;i<siz-1;i++)
    {
        for(int j=i+1;j<siz;j++)
        {
            if(ar[i]+ar[j]==k)
            {
                printf("\n%d + %d = %d",ar[i],ar[j],k);
            }
        }
    }
}

int main()
{
    //hardcoding the values
    int n=17;//number k;
    int ar[10]={8,5,3,8,9,5,6,1,4,7}; //list of numbers
    printf("\nThe list: 8,5,3,8,9,5,6,1,4,7");
    printf("\nThe value of k: %d",n);
    sumpair(ar,n,10);
    return 0;
}