#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int difficulty = 0, limit = 0, cnt = 0, number, guess;
	cout << "Welcome to the Number Guessing Game!" << endl;
	cout << "I'm thinking of a number between 1 and 100." << endl;
	cout << "You have 5 chances to guess the correct number." << endl << endl;
	cout << "Please select the difficulty level:" << endl;
	cout << "1. Easy (10 chances)" << endl;
	cout << "2. Medium (5 chances)" << endl;
	cout << "3. Hard (3 chances)" << endl << endl;
	cout << "Enter your choice: ";

	while (difficulty < 1 || difficulty > 3)
	{
		cin >> difficulty;
		if (difficulty < 1 || difficulty > 3)
		{
			cout << "Invalid choice. Please enter a valid choice: ";
		}
	}
	cout << "Great! You have selected the ";
	switch (difficulty) {
	case 1:
		limit = 10;
		cout << "Easy";
		break;
	case 2:
		limit = 5;
		cout << "Medium";
		break;
	case 3:
		limit = 3;
		cout << "Hard";
		break;
	}
	cout << " difficulty level." << endl;
	cout << "Let's start the game!" << endl << endl;

	srand(time(NULL));
	number = rand() % 100 + 1;

	while (true) {
		cout << "Enter your guess: ";
		cin >> guess;
		cnt++;
		if (guess == number) {
			cout << "Congratulations! You have guessed the correct number in " << cnt << " attempts." << endl;
			break;
		}
		else if (guess < number) {
			cout << "The number is higher than " << guess << "." << endl;
		}
		else {
			cout << "The number is lower than " << guess << "." << endl;
		}
		if (cnt == limit) {
			cout << "You have run out of chances. The correct number was " << number << "." << endl;
			break;
		}
		cout << endl;
	}
	return 0;
}