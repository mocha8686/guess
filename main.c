#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t t;
	srand((unsigned)time(&t));
	int ans = rand() % 100 + 1;
	int guess;
	int score = 21;

	while (guess != ans && score > 0)
	{
		printf("Guess the number between 1 - 100: ");
		scanf("%d", &guess);

		if (guess > ans)
		{
			printf("Lower\n");
		}
		else
		{
			printf("Higher\n");
		}
		
		score--;
	}

	if (score > 0)
	{
		printf("Correct\nScore: %d\n", score);
	}
	else
	{
		printf("Answer: %d", ans);
	}
}
