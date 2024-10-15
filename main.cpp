#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
    int ch; // To store choice of easy, medium or hard
    cout << "\nGuess the Number\n";
    cout << "\nEnter level:\n1 for Easy (Number between 1 to 10)\n2 for Medium (Number between 1 to 100)\n3 for Hard (Number between -500 to 500)\nEnter your choice:\t";
    cin >> ch;
    return 0;
}