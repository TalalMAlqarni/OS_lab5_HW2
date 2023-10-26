// Name: Talal Mohammed Alqarni
// ID: 2036183

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// Count the number of digits for the entered number.
int numDigits(long long int input) {
  int digitCount = 0;

  while (input > 0) {
    digitCount++;
    input /= 10;
  }

  return digitCount;
}

// Check if the number is an Armstrong number.
bool checkArmstrong(long long int number) {
  long long int digitCount = numDigits(number);
  long long int temp = number;
  long long int sum = 0;

  for (; temp != 0; temp /= 10) {
    long long int remainder = temp % 10;
    sum += pow(remainder, digitCount);
  }

  return sum == number;
}

int main(int argc, char *argv[]) {
  long long int number = 0;
  int count = 0;

  while (count < 25) {
    if (checkArmstrong(number)) {
      printf("Armstrong number %d is %lld\n", ++count, number);
      
    }
    number++;
  }

  return 0;
}