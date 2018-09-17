#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    string name;
    string choice;
    srand(time(NULL));
    int randomNum;

    cout << "Let's play Odds or Evens!\n" << endl;

    cout << "What's your name? ";
    cin >> name;

    cout << "\nHello, " << name << ". Choose (E)ven or (O)dd: ";
    cin >> choice;

    if ((choice == "E") || (choice == "e"))
    {
        cout << "\n" << name << " is Evens. I'll be Odds!" << endl;

        int fingers = -1;

        cout << "\n";

        while ((fingers < 0) || (fingers > 5))
        {
            cout << "How many fingers do you display? ";
            cin >> fingers;
        }

        if (fingers % 2 == 0)
        {
            randomNum = 2 * (rand() % 2 + 1) + 1;

            cout << "\nYou put " << fingers << " fingers." << endl;
            cout << "\nI put " << randomNum << " fingers." << endl;

            int sum = fingers + randomNum;

            cout << "\n" << fingers << " + "
                 << randomNum << " = " << sum << endl;

            cout << "\nHaha! " << sum << " is odd. I won!" << endl;
        }

        else if (fingers % 2 == 1)
        {
            randomNum = 2 * (rand() % 2 + 1);

            cout << "\nYou put " << fingers << " fingers." << endl;
            cout << "\nI put " << randomNum << " fingers." << endl;

            int sum = fingers + randomNum;

            cout << "\n" << fingers << " + "
                 << randomNum << " = " << sum << endl;

            cout << "\nHaha! " << sum << " is odd. I won!" << endl;
        }
    }

    if ((choice == "O") || (choice == "o"))
    {
        cout << "\n" << name << " is Odds. I'll be Evens!" << endl;

        int fingers = -1;

        cout << "\n";

        while ((fingers < 0) || (fingers > 5))
        {
            cout << "How many fingers do you display? ";
            cin >> fingers;
        }

        if (fingers % 2 == 0)
        {
            randomNum = 2 * (rand() % 2 + 1);

            cout << "\nYou put " << fingers << " fingers." << endl;
            cout << "\nI put " << randomNum << " fingers." << endl;

            int sum = fingers + randomNum;

            cout << "\n" << fingers << " + "
                 << randomNum << " = " << sum << endl;

            cout << "\nHaha! " << sum << " is even. I won!" << endl;
        }

        else if (fingers % 2 == 1)
        {
            randomNum = 2 * (rand() % 2 + 1) + 1;

            cout << "\nYou put " << fingers << " fingers." << endl;
            cout << "\nI put " << randomNum << " fingers." << endl;

            int sum = fingers + randomNum;

            cout << "\n" << fingers << " + "
                 << randomNum << " = " << sum << endl;

            cout << "\nHaha! " << sum << " is even. I won!" << endl;
        }
    }
}
