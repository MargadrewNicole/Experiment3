#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main ()
{
    int i,j,n=10,temp;
    float arr[10];
    cout << "Please enter ten integers: ";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << endl;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "\nThe array elements after sorting is: \n";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << "\n\nThe smallest integer is: " << arr[0] << endl;
    cout << "\nThe largest integer is: " << arr[9] << endl;
    cout << "\nTotal: " << arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9] << endl;
    cout << fixed << setprecision(2) << "\nAverage: " << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9]) / n << endl;

    getch();
    return 0;
}
