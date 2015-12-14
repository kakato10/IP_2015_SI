#include<iostream>

using namespace std;

int main()
{
    int array[8] = {0};
    int number;
    bool filled = false;
    while(!filled)
    {
        //user input
        cin >> number;
        //check if the number is in the specified interval
        if (number >= 3 && number <= 7) {
            //mark the number as entered
            array[number] = number;
        }
        //check if all int numbers between 3 and 7
        //were entered by the user
        for (int i = 3; i <= 7; i++)
        {
            filled = true;
            if (array[i] == i)
            {
                filled = filled && true;
            }
            else
            {
                filled = filled && false;
            }
        }
    }
    cout << "All numbers were added!" << endl;


    return 0;
}