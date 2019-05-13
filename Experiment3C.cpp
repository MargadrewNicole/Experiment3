#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,temp;

    cout << "How many characters do you want to enter?\n";
    cin >> num;

    char arr[num];

    cout << "Please enter your desired characters: ";

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr [j+1])
            {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }

    cout << "\nYour characters after sorting is: \n";

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nThe array has " << num << " characters.";
    getch();
    return 0;
}
