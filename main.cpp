#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int guess;
	int ans = rand() % 100 + 1;
	int score = 21;
	while (guess != ans && score > 0)
	{
		cout << "Guess the number between 1 - 100: ";
		cin >> guess;
	
		if (guess > ans)
		{
			cout << "Lower\n";
		}
		else if (guess < ans)
		{
			cout << "Higher\n";
		}
		score--;
	}

	if (score > 0)
	{
		cout << "Correct\nScore: " << score << "\n";
	}
	else
	{
		cout << "Answer: " << ans << "\n";
	}
	
}