#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void cls()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void game_logic(int n, int turns)
{
    int counter = 0;
    int guess;
    int fl = 0;
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
            fl = 1;
            break;
        }
    }
    cls();
    cout << R"(  /$$$$$$                                                 /$$     /$$                       /$$   /$$                         /$$                          
 /$$__  $$                                               | $$    | $$                      | $$$ | $$                        | $$                          
| $$  \__/ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$$       /$$$$$$  | $$$$$$$   /$$$$$$       | $$$$| $$ /$$   /$$ /$$$$$$/$$$$ | $$$$$$$   /$$$$$$   /$$$$$$ 
| $$ /$$$$| $$  | $$ /$$__  $$ /$$_____//$$_____/      |_  $$_/  | $$__  $$ /$$__  $$      | $$ $$ $$| $$  | $$| $$_  $$_  $$| $$__  $$ /$$__  $$ /$$__  $$
| $$|_  $$| $$  | $$| $$$$$$$$|  $$$$$$|  $$$$$$         | $$    | $$  \ $$| $$$$$$$$      | $$  $$$$| $$  | $$| $$ \ $$ \ $$| $$  \ $$| $$$$$$$$| $$  \__/
| $$  \ $$| $$  | $$| $$_____/ \____  $$\____  $$        | $$ /$$| $$  | $$| $$_____/      | $$\  $$$| $$  | $$| $$ | $$ | $$| $$  | $$| $$_____/| $$      
|  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$//$$$$$$$/        |  $$$$/| $$  | $$|  $$$$$$$      | $$ \  $$|  $$$$$$/| $$ | $$ | $$| $$$$$$$/|  $$$$$$$| $$      
 \______/  \______/  \_______/|_______/|_______/          \___/  |__/  |__/ \_______/      |__/  \__/ \______/ |__/ |__/ |__/|_______/  \_______/|__/      
                                                                                                                                                           
                                                                                                                                                           
                                                                                                                                                           )";
    cout << "\n\nResult\n";
    if (fl == 0)
    {
        cout << "\nYou loose.\n";
        cout << "\nThe number is " << n << endl;
    }
    else
    {
        cout << "\nYou guessed it in " << counter + 1 << " attempts\n";
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
    cls();
    int ch; // To store choice of easy, medium or hard
    // cout << "\nGuess the Number\n";
    cout << R"(  /$$$$$$                                                 /$$     /$$                       /$$   /$$                         /$$                          
 /$$__  $$                                               | $$    | $$                      | $$$ | $$                        | $$                          
| $$  \__/ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$$       /$$$$$$  | $$$$$$$   /$$$$$$       | $$$$| $$ /$$   /$$ /$$$$$$/$$$$ | $$$$$$$   /$$$$$$   /$$$$$$ 
| $$ /$$$$| $$  | $$ /$$__  $$ /$$_____//$$_____/      |_  $$_/  | $$__  $$ /$$__  $$      | $$ $$ $$| $$  | $$| $$_  $$_  $$| $$__  $$ /$$__  $$ /$$__  $$
| $$|_  $$| $$  | $$| $$$$$$$$|  $$$$$$|  $$$$$$         | $$    | $$  \ $$| $$$$$$$$      | $$  $$$$| $$  | $$| $$ \ $$ \ $$| $$  \ $$| $$$$$$$$| $$  \__/
| $$  \ $$| $$  | $$| $$_____/ \____  $$\____  $$        | $$ /$$| $$  | $$| $$_____/      | $$\  $$$| $$  | $$| $$ | $$ | $$| $$  | $$| $$_____/| $$      
|  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$//$$$$$$$/        |  $$$$/| $$  | $$|  $$$$$$$      | $$ \  $$|  $$$$$$/| $$ | $$ | $$| $$$$$$$/|  $$$$$$$| $$      
 \______/  \______/  \_______/|_______/|_______/          \___/  |__/  |__/ \_______/      |__/  \__/ \______/ |__/ |__/ |__/|_______/  \_______/|__/      
                                                                                                                                                           
                                                                                                                                                           
                                                                                                                                                           )";
    cout << "\nEnter level:\n1 for Easy (Number between 1 to 10)\n2 for Medium (Number between 1 to 100)\n3 for Hard (Number between -500 to 500)\nEnter your choice:\t";
    cin >> ch;
    cls();

    cout << R"(  /$$$$$$                                                 /$$     /$$                       /$$   /$$                         /$$                          
 /$$__  $$                                               | $$    | $$                      | $$$ | $$                        | $$                          
| $$  \__/ /$$   /$$  /$$$$$$   /$$$$$$$ /$$$$$$$       /$$$$$$  | $$$$$$$   /$$$$$$       | $$$$| $$ /$$   /$$ /$$$$$$/$$$$ | $$$$$$$   /$$$$$$   /$$$$$$ 
| $$ /$$$$| $$  | $$ /$$__  $$ /$$_____//$$_____/      |_  $$_/  | $$__  $$ /$$__  $$      | $$ $$ $$| $$  | $$| $$_  $$_  $$| $$__  $$ /$$__  $$ /$$__  $$
| $$|_  $$| $$  | $$| $$$$$$$$|  $$$$$$|  $$$$$$         | $$    | $$  \ $$| $$$$$$$$      | $$  $$$$| $$  | $$| $$ \ $$ \ $$| $$  \ $$| $$$$$$$$| $$  \__/
| $$  \ $$| $$  | $$| $$_____/ \____  $$\____  $$        | $$ /$$| $$  | $$| $$_____/      | $$\  $$$| $$  | $$| $$ | $$ | $$| $$  | $$| $$_____/| $$      
|  $$$$$$/|  $$$$$$/|  $$$$$$$ /$$$$$$$//$$$$$$$/        |  $$$$/| $$  | $$|  $$$$$$$      | $$ \  $$|  $$$$$$/| $$ | $$ | $$| $$$$$$$/|  $$$$$$$| $$      
 \______/  \______/  \_______/|_______/|_______/          \___/  |__/  |__/ \_______/      |__/  \__/ \______/ |__/ |__/ |__/|_______/  \_______/|__/      
                                                                                                                                                           
                                                                                                                                                           
                                                                                                                                                           )";

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