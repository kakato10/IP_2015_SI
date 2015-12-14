#include<iostream>

using namespace std;

int main()
{
    int arr[5];
    //user input
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    //suppose that the biggest element is
    //the element at index 0
    int number = arr[0], index = 0;

    //actual logic to find the biggest element
    //in the array
    for (int i = 0; i < 5; i++) {
        if (arr[i] > number)
        {
            number = arr[i];
            index = i;
        }
    }
    cout << number << " " << index;
    return 0;
}