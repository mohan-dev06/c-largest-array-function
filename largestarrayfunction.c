#include<stdio.h>
int largest(int a[], int size)
{
    int i, maxi;
    maxi=a[0];
    for(i=1; i<size; i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    return maxi;
}    
void main()
{
    int a[5]={8,22,27,32,42};
    printf("Largest=%d", largest(a, 5));            
}    