/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
minimum(int n1, int n2);
maximum(int n1, int n2);
multiply(int n1, int n2);
int main() 
{
   int no1, no2;
  
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
  
   printf("Minimum number is : %d \n", minimum(no1, no2));
   printf("Maximum number is : %d \n", maximum(no1, no2));
   printf("Multiply value is : %d \n", multiply(no1, no2));
   return 0;
}

minimum(int n1, int n2)
{
  int min;
  
  if(n1 < n2) {
    min = n1; }
  else if (n2 < n1) {
    min = n2; }
  
  return min;
}
maximum(int n1, int n2)
{
  int max;
  
  if(n1 < n2) {
    max = n2; }
  else if (n2 < n1) {
    max = n1; }
  
  return max;
}
multiply(int n1, int n2)
{
  int mltplyl;
  
  mltplyl = n1 * n2;

  return mltplyl;
}