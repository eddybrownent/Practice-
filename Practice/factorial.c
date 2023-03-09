#include <stdio.h>

//function defintion
int fact(int x)
{
    if(x==1)
    return 1;
    else 
    return x=x * fact(x-1);
}

int main() {
    int num;
    int result;
    
    printf("Enter a number:");
    scanf("%i", &num);
    // function calling
   result = fact(num);
    printf("%i", result);
    return 0;
}
