#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void game_logic(int n, int turns)
{
    int counter = 0;
    int guess;
    while (counter < turns)
    {
        cout << "\nEnter our guess:\t";
        cin >> guess;
        if (guess > n)
        {
            cout << "\nToo large. Try again...\n";
            counter++;
        }
        else if (guess < n)
        {
            cout << "\nToo small. Try again...\n";
            counter++;
        }
        else
        {
            cout << "\nYou guessed it in " << counter + 1 << " attempts\n";
            break;
        }
    }
}
void easy()
{
    srand(time(0));
    int n = rand() % 10 + 1;
    game_logic(n, 5);
}
void medium()
{
    srand(time(0));
    int n = rand() % 100 + 1;
    game_logic(n, 10);
}
void hard()
{
    int low = -500;
    int high = 500;
    srand(time(0));
    int n = rand() % (high - low + 1) + low;
    game_logic(n, 15);
}

int main(void)
{
    int ch; // To store choice of easy, medium or hard
    cout << "\nGuess the Number\n";
    cout << "\nEnter level:\n1 for Easy (Number between 1 to 10)\n2 for Medium (Number between 1 to 100)\n3 for Hard (Number between -500 to 500)\nEnter your choice:\t";
    cin >> ch;

    if (ch == 1)
    {
        easy();
    }
    else if (ch == 2)
    {
        medium();
    }
    else if (ch == 3)
    {
        hard();
    }

    return 0;
}