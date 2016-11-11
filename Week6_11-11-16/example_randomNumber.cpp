#include<iostream>
#include<cstdlib> /** needed for srand, rand */
#include<time.h>  /** needed for time */
using namespace std;

int randomNumber(int a, int b) ///return a random integer in the range [a,b]
{
  srand (time(NULL)); /** initialize random seed: */

  int r;

  r = rand() % b + a; /** generate secret number between a and b: */

  return r;
}

int main() {

	cout << randomNumber(20, 30) << "\n";

    return 0;
}
