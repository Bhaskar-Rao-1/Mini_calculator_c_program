#include<stdio.h>

int main()
{
    int num1,num2;
    char operator;
    printf("***    CALCULATOR    *** :\n");
    
    printf("enter only number\n");
    scanf("%d",&num1);
    printf("operator choose(+,-,*,/,%)\n");
    scanf("%s",&operator);
    
    printf("enter only number\n");
    scanf("%d",&num2);
    
    

    switch(operator) {
    case '+':
        printf("Sum is %d",num1+num2);
        break;
    case '-':
        printf("Difference is %d",num1-num2);
        break;
    case '*':
        printf("product is %d",num1*num2);
        break;
    case '/':
        printf("quoitent is %d",num1/num2);
        break;
    case '%':
        printf("remainder is %d",num1%num2);
        break;
    
    default :
        printf("enter correct operator");
    }
    return 0;
}