#include<iostream>
#include<cstdlib> /** needed for srand, rand */
#include<time.h>  /** needed for time */
using namespace std;

int randomNumber(int a, int b) ///return a random integer in the range [a,b]
{
  srand (time(NULL)); /** initialize random seed: */

  int r;

  r = rand() % (b-a+1) + a; /** generate secret number between a and b: */

  return r;
}

int main() {
    int a, b;
    int number, steps;
    bool userHasWon;

    cin >> a >> b;

    number = randomNumber(a, b);
    userHasWon = false;

    for(steps = 1; (steps <= 20 && !userHasWon); steps++) {
        int guess;

        cout << "Make a guess #" << steps << "\n";
        cin >> guess;

        if(guess < number) {
            cout << "Too small\n";
        }

        if(guess > number) {
            cout << "Too big\n";
        }

        if(guess == number) {
            userHasWon = true;
        }
    }

    steps--;

    if(userHasWon) {
        cout << "You guessed the number in " << steps << " steps\n";
    }

    else {
        cout << "You failed to guess in under 20 steps\n";
    }


    return 0;
}

