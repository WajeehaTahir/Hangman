# Hangman Game

This is a simple Hangman game implemented in C++ that you can play in your console. The game challenges you to guess a word letter by letter. Be careful not to make too many incorrect guesses, or the hangman will be completed, and you'll lose the game!

## How to Play

1. Clone or download this repository to your local machine.
2. Compile the code using your C++ compiler.
3. Run the compiled executable.
4. Follow the on-screen instructions to play the game.

## Rules

- You will be shown a series of underscores, each representing a letter in the secret word.
- Try to guess the letters in the secret word by entering a character.
- If your guess is correct, the letter will be revealed in its correct position(s).
- If your guess is incorrect, the game will keep track of your incorrect guesses, and parts of the hangman will start to appear.
- You have a limited number of incorrect guesses before the hangman is fully drawn, and you lose the game.
- Try to guess the word before the hangman is completed to win!

## Code Explanation

The code is organized into functions and provides the following functionalities:

- `setWord()`: Selects a word for the game and initializes the game.
- `disp()`: Displays the current state of the game, including the hangman's progress and your health.
- `game()`: Handles the core game logic, including checking your guesses and updating the game state.
- `check()`: Checks if the game should end (either by winning or losing).
- `winAnim()`: Displays a winning animation when you successfully guess the word.
- `main()`: The entry point of the program, where the game is started.

## Screenshot
![image](https://github.com/WajeehaTahir/Hangman/assets/88159584/95687f6f-983d-4b9d-9390-2db6bb2700b1)


## 
_Documented by ChatGPT._
