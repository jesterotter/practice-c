#include <stdio.h>
#include <stdlib.h>

/*Prompt the user for a number of seconds.
 /Take the user's input and convert the number of seconds into its duration in Hours, Minutes, and remaining Seconds.
 /Extra Credit: Make sure the Hours, Minutes, and Seconds print with no decimal places.
 */
int main(void)
{
    int sec, h, m, s; //intialize var for seconds hours and minutes
	printf("Input seconds: ");//ask user to write a number of seconds
	scanf("%d", &sec);//provide terminal

	//do maths
	h = (sec/3600);

	m = (sec -(3600*h))/60;

	s = (sec -(3600*h)-(m*60));


 //print the calculations
 printf("The %d seconds is equal to %d hours %d mins and  %d secs\n", sec, h, m, s);

return 0;


}
