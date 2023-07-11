#include<stdio.h>

void takearray(int *a,int n)
{
    for (int i=0; i<n; i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

void printarray(int a[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d  ",a[i]);
    printf("\n");
}

void insertionsort(int a[],int n)
{
    int key;
    for (int i=1; i<=n-1; i++)
    {
        key=a[i];
        int j=i-1;
        while(a[j]>key&&j>=0)
        {   a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void merge(int a[],int low, int mid, int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int b[high+1];
    while(i<=mid && j<=high)
    {
        if (a[i]<a[j])
//{
            b[k++]=a[i++];
//i++;
//}
        else
//{
            b[k++]=a[j++];
//j++;
//}
//k++;
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=high)
        b[k++]=a[j++];
    for (int i=low; i<=high; i++)
        a[i]=b[i];
}


void mergesort(int a[],int low,int high)
{
    if (low<high)
    {   int mid = (low + high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void main ()
{   int c,p,q;
    while(c!=4)
    {
        printf("Enter 1 to take array: \n");
        printf("Enter 4 to exit\n");
        scanf("%d",&c);

        switch (c)
        {
        case 1:
        {   int n;
            int *a;
            a=(int*)malloc(sizeof(int));
            printf("Enter the size of the array: ");
            scanf("%d",&n);
            takearray(a,n);
            printf("\nEnter 2 for insertion sort:\n");
            printf("Enter 3 for merge sort: \n");

            scanf("%d",&p);
            switch (p)
            {
            case 2:
            {
                printf("\nInsertion sort is running\n");
                insertionsort(a,n);
                printf("After sorting\n");
                printarray(a,n);
                break;
            }
            case 3:
            {
                printf("\nMerge sort is running\n");
                mergesort(a,0,n-1);
                printf("After sorting\n");
                printarray(a,n);
                break;
            }


            }
            break;
        }
        case 4://loop is being controlled in the while statement
//but this line is for we are using default so c=4 the default will be executed
        {   break;

        }
        default:
        {   printf("\nWrong input\n\n");
            break;
        }
        }
    }
}
