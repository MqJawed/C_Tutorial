#include<stdio.h>
int linear_search(int a[],int,int);
void main()
{int n,element;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[100];
    for (int i=0;i<n;i++)
    {printf("Enter the element %d ",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&element);
    int p=linear_search(a[100],n,element);
    printf("The array is  %d element",p+1);
}
int linear_search(int a[100],int n,int element)
{    
    
    for (int i=0;i<n;i++)
    {    if (a[i]==element)
         return i;
            
    }
    return -1;    
}