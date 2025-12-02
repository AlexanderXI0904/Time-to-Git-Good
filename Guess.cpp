#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int MIN = 0, MAX = 100;
    cout << "=== Welcome to the Number Guessing Game! ===\n";

    srand(time(0));
    int number = rand() % (MAX - MIN + MIN);

    int guess, attempts = 0;

    while (guess != number) 
    {
        cout << "Guess a number between " << MIN << " and " << MAX << ": ";
        cin >> guess;

        if (guess < number)
            cout << "Too low! Try again.\n";
        else if (guess > number)
            cout << "Too high! Try again.\n";
        else {
            cout << "Congratulations! You guessed the number " << number << " in " << attempts << " attempts.\n";
        }
        attempts =+ 1;
    }

    cout << "---------------------------------\n";

    system("pause");
    return 0;
}
