
//Astha Pandit    - Last Contributor

#include <stdio.h>
int main() {    

    int num1, number2, sum;

    
    number1 = 10;
    number2 = 20;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2,sum);
    return 0;
}