#include <stdio.h>
//function defination
int power(int a, int b) {
    int result= 1.0;
    int i;
   for (i = 0; i < b; i++) {
	   //can also be written as result *=a
        result = result * a;
   }
    return result;
}

int main() {
    int a;
    int b;
    printf("Enter the base number: ");
    scanf("%i", &a);
    printf("Enter the exponent: ");
    scanf("%i", &b);
    //function calling
    int result = power(a, b);
    printf("%i raised to the power of %i is %i\n", a, b, result);
    return 0;
}
