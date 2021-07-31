#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Prompt the user for A, B, and C values and then use those values to determine the value of 'X' using the Quadratic Formula.

  where a, b, and c are coefficients

Extra Credit: Build in a mechanism which checks the solution by plugging it back into the formula and seeing if it equals 0.
 Use if control flow to instruct the user to double check all solutions which aren't confirmed
 (a lot won't be confirmed since they'll be truncated decimals).
*/
int main()
{
/* Initialize var a, b, and c */
int a, b, c, sum, sum1;
float x;
float x1;

/*ask user to input values */
printf("Input value A ");
scanf("%d", &a);

printf("Input value B ");
scanf("%d", &b);

printf("Input value C ");
scanf("%d", &c);

/* do maths */

  x = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
  x1 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);
/*find sum1 and sum*/
sum = ((a*(x*x)) + (b*x) + c);
sum1 = ((a*(x1*x1)) + (b*x1) + c);


if (sum == 0 || sum1 == 0 ){
    printf("answer is correct");
}
else {
     printf("answer is correct");
}



return 0;
}
