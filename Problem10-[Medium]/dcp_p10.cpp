#include <iostream>
#include <windows.h>
using namespace std;

int display(int n)
{
    printf("\nThis line has been printed after %d milli-seconds.",n);
    return 0;
}

int job_scheduler(int n, int (*func)(int ))
{
    Sleep(n);
    return display(n);
}

int main()
{
    int b;
    printf("Enter the time interval (in ms) after which you want to call the function: ");
    scanf("%d", &b);
    job_scheduler(b, &display);
    return 0;
}