using namespace std;
#include <iostream>
int main()
{
	int array[2][3];
	int array2[3][2];
	int result[2][2] = { { 0 }, { 0 } };
	cout << "Enter matrix 1:" << endl;

	//user input for the first matrix
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	}

	cout << "Enter matrix 2:" << endl;
	
	//user input for the second matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++)
			cin >> array2[i][j];
	}

	//itreating the rows of the first matrix
	for (int i = 0; i < 2; i++) {
		//iterating the columns of the second matrix
		for (int j = 0; j < 2; j++) {
			//iterating the columns of the first matrix
			//and iterating the rows of the second matrix
			//in order to make the sum for the element
			//of the multiplied matrix
			for (int k = 0; k < 3; k++) {
				result[i][j] += array[i][k] * array2[k][j];
			}
		}
	}

	//displaying the result
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			cout << result[i][j] << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}
