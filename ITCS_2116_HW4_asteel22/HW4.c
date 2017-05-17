
/*********************************************************
 * Mickey Mouse, mmouse@uncc.edu
 * ITCS 2116, Fall 2016
 * HW4, Due November 7, 2016
 *
 * calcroots.c - This program calculates the roots of a 
 * quadratic equation using the quadratic formula.
 *********************************************************/

#include <stdio.h>
#include <stdlib.h>

#define GUESS_THRESHOLD 0.000000001

#define EXIT_VALID 0
#define EXIT_BADINPUT 1
#define EXIT_DISCRIMINANT_NEGATIVE 2
#define EXIT_DISCRIMINANT_ZERO 3

int main();
double myreaddouble();
// Provide prototype for mysqrt here
// Provide prototype for myabs
double getroot(double a, double b, double c, int positive);


int main()
{
  double a, b, c;
  double result;

  //DEBUG CASE #1 (does the myreaddouble function work?)
  /*
  while(1)
  {
    double in;
    in = myreaddouble();
    printf("read %lf\n", in);
    if(in == 0)
    {
      printf("terminating on zero\n");
      return 0;
    }
  }
  */
  
  //DEBUG CASE #2 (does the myabs function work?)
  /*
  while(1)
  {
    double in;
    in = myreaddouble();
    printf("read %lf - the absolute value of that is %lf\n", in, myabs(in));
    if(in == 0)
    {
      printf("terminating on zero\n");
      return 0;
    }
  }
  */

  //DEBUG CASE #3 (does the squareroot function work?)
  /*
  while(1)
  {
    double in;
    in = myreaddouble();
    printf("read %lf - the square root of that is %lf\n", in, mysqrt(in));
    if(in == 0)
    {
      printf("terminating on zero\n");
      return 0;
    }
  }
  */

  printf("This program solves a quadratic equation using the quadratic formula.\n");
  printf("For the form ax^2 + bx + c = 0 please enter the following:\n");

  printf("a=");
  a = myreaddouble();

  printf("b=");
  b = myreaddouble();

  printf("c=");
  c = myreaddouble();
  
   
  //You could uncomment this to debug the values or a b and c:
  //printf("a b c %lf %lf %lf\n", a, b, c);

  result = getroot(a, b, c, 1);
  printf("The positive root is %lf\n", result);

  result = getroot(a, b, c, 0);
  printf("The negative root is %lf\n", result);

  return 0;
}




/*
 * This function reads a 'double' from the keyboard (standard intput) 
 * and returns it.
 */
double myreaddouble()
{
  double response;
  scanf("%lf", &response);
    
  return 0;
}



//TODO: You must provide the comments for mysqrt here.
//TODO: You must implement the function mysqrt here.
//TODO: Remember, mysqrt takes a single parameter as a double,
//      and it also returns a double that is the square root
//      for that number.
//      The squareroot of 0 is 0.
//      The squareroot of a negative results in:
//        {
//          printf("mysqrt cannot accept negative numbers.\n");
//          exit(EXIT_BADINPUT);
//        }
//
//This is the algorithm to use for estimating the square root:
//Given input 'n':
//
//  Perform input validation on n. (Not negative)
//  If n is zero, then shortcircuit and return zero immediately.
//
//  Let guess be n.
//  Let the next movementDistance be n/2
//  
//  While the absolute value of (guess^2 - n) is greater than GUESS_THRESHOLD:
//    If the guess^2 is less than n
//      Let the guess be guess + movementDistance
//    Otherwise
//      Let the guess be guess -movementDistance
//    Let the movementDistance be divided by two
//
//  Return the value of guess. (It is now within the GUESS_THRESHOLD)
//
//
//TODO: Start the function mysqrt right HERE
double mysqrt(double n)
{
  double guess = n;
  double movementDistance = n/2;
  	if(n < 0) {
		printf("mysqrt cannot accept negative numbers.\n");
		exit(EXIT_BADINPUT);
	}
	else if(n == 0)
		return 0;
	else if(n > 0) {
		while(myabs(((n*n) - n) > GUESS_THRESHOLD){
			if((guess*guess) < n){
				guess = guess + movementDistance;
			}
			else {
				guess = guess + movementDistance;
			}
			movementDistance /= 2;
		}
	}
		
	return guess;
}


/*
 * This function returns the absolute value of a provided double.
 * ie, 123 returns 123
 *     -456 returns 456
 *     0 returns 0
 */
double myabs(double n)
{
	double abs = 0;
	if(n > 0) {
		abs = n;
	}else if (n < 0) {
		for (int i = n; i < 0; i++)
			abs++;
	}
	
	return abs;
}



//TODO: You must provide the comments for getroot here.
//TODO: You must implement the function getroot here.
//HINT: Remember that if the discriminant is negative then you'll print the message:
//        "The discriminant is negative. There are no real roots.\n"
//        and exit with EXIT_DISCRIMINANT_NEGATIVE
//      If the discriminant is zero then you'll print:
//        "The discriminant is zero. There is only one real root.\n"
//        and exit with EXIT_DISCRIMINANT_ZERO
//HINT: Remember that if the variable positive is set to zero, then
//      you return the negative case from the quadratic formula.
//      Otherwise, you return the positive case from the quadratic formula.
//HINT: To do b^2 you simply evaluate (b*b) since C doesn't let you use the '^' operator like that.
double getroot(double a, double b, double c, int positive)
{
	double discriminant = (b*b) - (4 * a * c);
	if (discriminant < 0){
		printf("The discriminant is negative. There are no real roots.\n");
		return exit(EXIT_DISCRIMINANT_NEGATIVE);		
	}
    else if(discriminant == 0) {
		printf("The discriminant is zero. There is only one real root.\n");
		return exit(EXIT_DISCRIMINANT_ZERO);
	}
	else if(discriminant > 0) {
		if(positive == 0){
			return (-b - mysqrt((b*b) - (4 * a * c)))/2a;
		}
		else if(positive == 1){
			return (-b + mysqrt((b*b) - (4 * a * c)))/2a;
		}
	}
	
  return 0;
}