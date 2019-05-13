#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    char province[3][11] = {"Province A" , "Province B" , "Province C"};
    string day[7] = {"Day 1" , "Day 2" , "Day 3" , "Day 4" , "Day 5" , "Day 6" , "Day 7"};
    int temp[3][7];

    cout << "Please enter the temperature (in degrees Celsius) for the following provinces: \n\n";

    for (int i=0; i < 3; i++)
        {
            for (int j=0; j < 7; j++)
            {
                cout << province[i] << ", ";
                cout << day[j] << ": ";
                cin >> temp[i][j];
            }
        }

        cout << "\n" << "Displaying values:\n";

        for (int i=0; i < 3; i++)
        {
            for (int j=0; j < 7; j++)
            {
                cout << province[i] << ", ";
                cout << day[j] << ": ";
                cout << temp[i][j] << " degrees Celcius" << endl;
            }
        }


    getch();
    return 0;

}
