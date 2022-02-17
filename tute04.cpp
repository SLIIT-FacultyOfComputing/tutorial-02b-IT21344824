/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

Factorial(int no)
{
  int  tot , x = 1 ;
  
  for(int i=0 ; i = no ; i++ )
    {
     x = no - 1 ;
     tot = x * x ;
    }
  return tot;
}

nCr(int n, int r)
{
  int tot , tot2 ;
  
  for(int i=0 ; i = r ; i++ )
    {
     x = r - 1 ;
     tot = x * x ;

      y = (n-r) - 1 ;
      tot2 = y * y ;
    }
  
  
  return Factorial(no)/tot * tot2 ; 
}