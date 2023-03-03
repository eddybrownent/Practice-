#include <stdio.h>

int main() 
{ 
    int i;
 int arr[] = {34,12,74,54,48};
 int  largest = *arr;
    for (i = 0; i < 5; i++)
     // printf("the number: %i\n", *(arr+i));
      for (i = 0; i < 5; i++)
      if (largest < *(arr+i))
      {
      largest = *(arr+i);
      printf("largest number: %i\n", *(arr+i));
      }
    return 0;
}
