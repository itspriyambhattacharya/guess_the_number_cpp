
# Guess the Number Game

This is a simple command-line game written in C++ where the player has to guess a randomly generated number. The game has three difficulty levels—Easy, Medium, and Hard—each with a different range of numbers and a limited number of attempts.

## How the Game Works

1. The player selects a difficulty level:
   - **Easy**: Guess a number between 1 and 10 with 5 attempts.
   - **Medium**: Guess a number between 1 and 100 with 10 attempts.
   - **Hard**: Guess a number between -500 and 500 with 15 attempts.
   
2. The game will generate a random number within the specified range for the chosen level.

3. The player then attempts to guess the number within the allotted number of attempts:
   - If the guessed number is too high, the game will prompt, "Too large. Try again..."
   - If the guessed number is too low, the game will prompt, "Too small. Try again..."
   - If the guess is correct, the game will congratulate the player and display the number of attempts it took to guess correctly.

4. If the player uses up all attempts without guessing correctly, the game ends.

## Getting Started

### Prerequisites

- C++ compiler (e.g., `g++`)
  
### Compiling the Code

To compile the code, navigate to the directory containing the file and run:

```bash
g++ guess_the_number.cpp -o guess_the_number
```

This will create an executable file named `guess_the_number`.

### Running the Game

After compiling, you can run the game by executing the following command:

```bash
./guess_the_number
```

Follow the on-screen prompts to select a difficulty level and start guessing!

## Game Functions

- **Main Menu**: Presents the difficulty levels and takes the user's choice as input.
- **Game Logic**: Handles the number guessing and feedback based on the player's input.
- **Difficulty Levels**:
  - `easy()`: Generates a random number between 1 and 10 with 5 attempts.
  - `medium()`: Generates a random number between 1 and 100 with 10 attempts.
  - `hard()`: Generates a random number between -500 and 500 with 15 attempts.

## Example Output

```plaintext
Guess the Number
Enter level:
1 for Easy (Number between 1 to 10)
2 for Medium (Number between 1 to 100)
3 for Hard (Number between -500 to 500)
Enter your choice: 1

Enter your guess: 5
Too large. Try again...

Enter your guess: 3
You guessed it in 2 attempts!
```

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

Thanks for playing! This simple game is a fun way to practice C++ basics, including loops, conditionals, and random number generation.
