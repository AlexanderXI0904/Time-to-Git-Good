#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int MIN = 0, MAX = 100;
    cout << "=== Welcome to the Number Guessing Game! ===\n";

    srand(time(0));
    int number = rand() % (MAX - MIN + 1) + MIN;

    int guess, attempts = 0;
    
    do{
        cout << "Guess a number between " << MIN << " and " << MAX << ": ";
        cin >> guess;
        ++attempts;
        
        if (guess < number)
            cout << "Too low! Try again.\n";
        else if (guess > number)
            cout << "Too high! Try again.\n";
        
    } while (guess != number);
    
    cout << "Congratulations! You guessed the number " << number << " in " << attempts << " attempts.\n";
    cout << "---------------------------------\n";

    system("pause");
    return 0;
}
