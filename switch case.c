#include<stdio.h>
void main()
{
int a;
printf("Enter the marks ");
scanf("%d",&a);
switch (a>=90){
    case (1):
    printf("Grade is O");
    break;
    case(0):
      {  switch (a>=80){
        case (1):
        printf("Grade is E");
        break;
        case(0):
          {  switch (a>=70){
            case (1):
            printf("Grade is A");
            break;
            case(0):
              {  switch (a>=60){
                case (1):
                printf("Grade is B");
                break;
                case(0):
                  {  switch (a>=50){
                    case (1):
                    printf("Grade is C");
                    break;
                    case(0):
                      {  switch (a>=40){
                        case (1):
                        printf("Grade is D");
                        break;
                        case(0):
                        printf("Failed");
    
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
}
    
    
    