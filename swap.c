#include<stdio.h>

void swap(int num1, int num2) // call by value (bug)
{
  int tmp = num1;
  num1 = num2;
  num2 = tmp;

}
int main() {
    int number_1 = 10;
    int number_2 = 87;
    printf("Before swapping:: number1: %d and number2: %d \n", number_1, number_2);
    swap(number_1, number_2);
    printf("After swapping:: number1: %d and number2: %d \n", number_1, number_2);
    return 0; 
}