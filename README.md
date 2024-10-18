
# Guess the Number Game

A fun and challenging C++ console game where you try to guess a randomly generated number. The game offers three difficulty levels: Easy, Medium, and Hard, each with different ranges and number of attempts.

## Features

- **Easy Level**: Guess a number between 1 and 10 with 5 attempts.
- **Medium Level**: Guess a number between 1 and 100 with 10 attempts.
- **Hard Level**: Guess a number between -500 and 500 with 15 attempts.

## Game Flow

1. The game clears the console screen before starting.
2. Choose a difficulty level (Easy, Medium, or Hard).
3. The program generates a random number based on the chosen level.
4. You attempt to guess the number within the allowed number of attempts.
5. The game provides feedback on whether your guess is too high or too low.
6. The game ends when you either guess the number correctly or run out of attempts.
7. At the end of the game, you’ll see a summary of your performance.

## How to Play

1. Clone the repository or download the source code.
2. Compile and run the code in any C++ environment.
3. Choose a level and start guessing!

## Compilation

To compile and run the program:

```bash
g++ guess_the_number.cpp -o guess_the_number
./guess_the_number
```

## Example Output

```
  /$$$$$$                                                 /$$     /$$                       /$$   /$$
 /$$__  $$                                               | $$    | $$                      | $$$ | $$
| $$  \__/ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$$       /$$$$$$  | $$$$$$$   /$$$$$$       | $$$$| $$
| $$ /$$$$| $$  | $$ /$$__  $$ /$$_____//$$_____/      |_  $$_/  | $$__  $$ /$$__  $$      | $$ $$ $$
| $$|_  $$| $$  | $$| $$$$$$$$|  $$$$$$|  $$$$$$         | $$    | $$  \ $$| $$$$$$$$      | $$  $$$$
| $$  \ $$| $$  | $$| $$_____/ \____  $$\____  $$        | $$ /$$| $$  | $$| $$_____/      | $$\  $$$
|  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$//$$$$$$$/        |  $$$$/| $$  | $$|  $$$$$$$      | $$ \  $$
 \______/  \______/  \_______/|_______/|_______/          \___/  |__/  |__/ \_______/      |__/  \__/

Enter level:
1 for Easy (Number between 1 to 10)
2 for Medium (Number between 1 to 100)
3 for Hard (Number between -500 to 500)
```

Enjoy the game and have fun guessing!
