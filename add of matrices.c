#include<stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
for (int i=0;i<3;i++)
{ for (int j=0;j<3;j++)
{printf("Enter the element: "); 
scanf("%d",&a[i][j]);
}
printf("\n");//to let the user know that a row has ended
}
for (int i=0;i<3;i++)
{ for (int j=0;j<3;j++)
{printf("%d ",a[i][j]); 

}
printf("\n");
}
for (int i=0;i<3;i++)
{ for (int j=0;j<3;j++)
{printf("Enter the element: "); 
scanf("%d",&b[i][j]);
}
printf("\n");
}
for (int i=0;i<3;i++)
{ for (int j=0;j<3;j++)
{printf("%d ",b[i][j]); 

}
printf("\n");
}
for (int i=0;i<3;i++)
{ for (int j=0;j<3;j++)
{c[i][j]=a[i][j]+b[i][j];
}
}
printf("\n");
printf("The addition of the two matrices is\n");
for (int i=0;i<3;i++)
{ for (int j=0;j<3;j++)
{printf("%d ",c[i][j]); 

}
printf("\n");
}

}