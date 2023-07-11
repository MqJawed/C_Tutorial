#include<stdio.h>

void main()
{int m,n;
printf("Enter the number of student: ");
scanf("%d",&m);
printf("Enter the number of subject: ");
scanf("%d",&n);
int a[m][n];//m is denoting row & n is denoting column;
     for (int i=0;i<m;i++)
{    for (int j=0;j<n;j++)
     { printf("Enter the marks of student %d in subject %d ",i+1,j+1);
       scanf("%d",&a[i][j]);
     }
    printf("\n");//it will show that 1 student is over
}
for (int i=0;i<m;i++)
{    for (int j=0;j<n;j++)
     { printf("The marks of student %d in subject %d is %d\n",i+1,j+1,a[i][j]);
       
     }
}

}