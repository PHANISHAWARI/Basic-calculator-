#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    char op;
    while(1)
        {
            printf("Enter any Integer\n");
            printf("Use any of the operation as follows:\n");
            printf("+,-,*,/,%,^\n");
            printf("Example-->265/5\n");
            printf("Plese enter:");
            
            if(scanf("%d %c %d",&a,&op,&b) !=3)
            {
                while(getchar() != '\n');
                printf("Invalid operation Example- 55+25\n\n");
                    continue;
            }
            
            switch(op)
                {
                    case '+':
                    printf("Addition:%d\n",a+b);
                    break;
                    case '-':
                    printf("Subtraction:%d\n",a-b);
                    break;
                    case '*':
                    printf("Multiplication:%d\n",a*b);
                    break;
                    case '/':
                        if(b==0)
                        {printf("Error:cannot divide by zero\n");}
                                else
                        {printf("Division:%d\n",a/b);
                    printf("Modulus:%d\n",a%b);}
                    break;
                    case '%':
                    printf("percentage:%.2f\n",a*b/100.0);
                    break;
                    case '^':
                    printf("power:%.0f\n",pow(a,b));
                    break;
                    default:
                    printf("Error:Invalid Operation-Please try again");
                    break;
                }
            printf("\n\n");
        }
}