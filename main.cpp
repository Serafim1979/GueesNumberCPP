#include<iostream>
#include<cstdlib>

using std::cout;
using std::cin;
using std::endl;

void play(int m);

int main()
{
    int option;
    int magic;
    magic = rand();

    do
    {
        cout << "1. Get magic number" << endl;
        cout << "2. Game" << endl;
        cout << "3. Quit" << endl;
        do
        {
            cout << "You choice" << endl;
            cin >> option;
        }while(option < 1 || option > 3);

        switch(option)
        {
        case 1:
            magic = rand();
            break;
        case 2:
            play(magic);
            break;
        case 3:
            cout << "Good bye!" << endl;
            break;
        }
    }while(option != 3);

    return 0;
}
////////////////////////////////////////////////////
void play(int m)
{
    int t, x;
    for(t = 0; t < 100; t++)
    {
        cout << "Guess the number: ";
        cin >> x;

        if(x == m)
        {
            cout << "You win!" << endl;
            return;
        }
        else
            if(x < m)
            cout << "Less" << endl;
        else
            cout << "More" << endl;
    }
    cout << "You used every chance to guess the number"<< endl;
}
