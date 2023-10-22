/**
 * Author(s):
 * Date:
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
  int i1 = 10;
  while (i1 < 20) {
    printf("%d ", i1);
    i1 += 3;
  }
  printf("\n");

  //2. Rewrite the given while loop as an equivalent for loop
  for (int k = 3; k > -4; k--) {
    printf("%d ", k);
  }
  printf("\n");

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5
  for (int i = 1; i <= n; i++) {
    if (i == n) {
      printf("%d\n", i);
    } else {
      printf("%d, ", i);
    }
  }

  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25
  for (int i = 1; i <= n; i++) {
    if (i == n) {
      printf("%d\n", i * i);
    } else {
      printf("%d, ", i * i);
    }
  }

  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
    if (i == n) {
      printf("%d = %d\n", i, sum);
    } else {
      printf("%d + ", i);
    }
  }

  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
  int squareSum = 0;
  for (int i = 1; i <= n; i++) {
    squareSum += i * i;
    if (i == n) {
      printf("%d^2 = %d\n", i, squareSum);
    } else {
      printf("%d^2 + ", i);
    }
  }

  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6
  int evenSum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      evenSum += i;
      if (i == n) {
        printf("%d = %d\n", i, evenSum);
      } else {
        printf("%d + ", i);
      }
    }
  }

  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.
  for (int i = 1; i <= n; i++) {
    if (i % 7 == 0 && i % 11 == 0) {
      printf("FooBar\n");
    } else if (i % 7 == 0) {
      printf("Foo\n");
    } else if (i % 11 == 0) {
      printf("Bar\n");
    } else {
      printf("%d\n", i);
    }
  }

  return 0;
}
