#include <stdio.h>
#include <stdlib.h>

/*Prompt the user for a Numerator (top number of a fraction) and a Denominator (bottom number of a fraction).
/Tell the user whether or not there is a remainder using if control flow.
*/
int main()
{
//initialize numerator var and denominator var
int num;
int num2;
int rem0;

//Prompt the user for a Numerator (top number of a fraction) and a Denominator
printf("Input numerator ");
scanf("%d", &num);

printf("Input denominator ");
scanf("%d", &num2);

//Tell the user whether or not there is a remainder using if control flow
rem0 = num%num2;

if(rem0>0 || rem0<0){
    printf("There is a remainder!!\n");
}
else {
    printf("There is no remainder!!\n");
}


return 0;
}
