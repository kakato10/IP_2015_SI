#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 4;
	int array[ARRAY_SIZE];

	//adding values for every element in the array
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "Please insert an integer value: ";
		cin >> array[i];
	}

	//check if the array is an ascending sequence
	for (int i = 0; i < ARRAY_SIZE - 1; i++) {
		for (int j = i + 1; j < ARRAY_SIZE; j++) {
			if (array[i] > array[j]) {
				//swaping values that are breaking the ascendence
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	//visualizing the array at the end
	for (int i = 0; i < ARRAY_SIZE; i++)
		cout << "Number[" << i << "] is: : "<< array[i] << endl;

	system("pause");
	return 0;
}

