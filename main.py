#!/usr/bin/env python3
import random

ans = random.randint(1, 100)
guess = -1
score = 21
while (guess != ans and score > 0):
    try:
        guess = int(input('Guess the number between 1 - 100: '))
    except ValueError:
        print('Not a number')
        continue

    if (guess > ans):
        print('Lower')
    elif (guess < ans):
        print('Higher')
    score -= 1

if (score > 0):
    print('Correct')
    print(f'Score: {score}')
else:
    print(f'Answer: {ans}')
