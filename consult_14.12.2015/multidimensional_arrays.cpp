#include<iostream>

using namespace std;

int main()
{
    int arr[3][4];

    //fill the array with values equal
    //to tho the sum of the row and column
    //that the current element is placed
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = i + j;
        }
    }

    //display every value in the array as
    //well as it's position
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << i << " " << j << ": " << arr[i][j] << " | ";
        }
        cout << endl;
    }
    return 0;
}