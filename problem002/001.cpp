/**
 * Problem description:
 * 
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms. By
 * starting with 1 and 2, the first 10 terms will be:
 *          1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence whose values do not exceed four
 * million, find the sum of the even-valued terms.
 *
 */

#include <iostream>

int main(){

   int firstTerm = 1;
   int secondTerm = 2;
   int tempTerm = 0;
   int sum = 0;

   while( secondTerm <= 4000000 ){
      if( 0 == secondTerm % 2  )
         sum += secondTerm;
      tempTerm = firstTerm;
      firstTerm = secondTerm;
      secondTerm += tempTerm;
   };

   std::cout << sum << std::endl;

}




