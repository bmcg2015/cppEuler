/**
 * Problem description:
 * 
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5,
 * 6, and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */

#include <iostream>


/**
 * Calculates the sum of an arithmetic progression, where the difference between succesive
 * terms is d, the maximum value in the sequence is the largest integer less than or equal
 * to n
 *
 * param d: The constant difference between each term (also used as the value of the first
 *          term).
 * param n: The maximum value in the sequence.
 *
 */
int sumArithmeticProg( int d, int n ){

   // Calculate the number of terms in the sequence:
   int numTerms = n / d;
   std::cout << numTerms << std::endl;

   int sum = 0.5 * numTerms * ( d + d * numTerms );
   std::cout << sum << std::endl;

   return sum;

}

int main(){

   maxNum: 999;

   std:: cout << sumArithmeticProg( 3, 999 ) + sumArithmeticProg( 5, 999 )
      - sumArithmeticProg( 15, 999 ) << std::endl;

}

