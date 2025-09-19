#include<stdio.h>
#include<math.h>

int main(){

     char operation = '\0';
     double num1 = 0.0, num2 = 0.0;
     double result = 0.0;

             printf("Enter First Number: ");
             scanf("%lf", &num1);

             printf("Enter Operator (+, -, *, /): ");
             scanf(" %c",&operation);

            printf("Enter Second Number: ");
            scanf("%lf", &num2);


         switch(operation){
             case '+':
             result = num1 + num2;
             break;

             case '-':
             result = num1 - num2; 
             break;

              case '*':
             result = num1 * num2;
             break;

             case '/':
             result = num1 / num2; 
             break;
         default:
            printf( "Invalid Operator!");
                             }

            printf("Result: %.0lf", result);


    return 0;
}