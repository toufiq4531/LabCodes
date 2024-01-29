#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
        }
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main() {
	int arr[] = { 5, 1, 4, 2, 8, 10};
	int n = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, n);

	cout << "Sorted array: \n";
	printArray(arr, n);

	return 0;
}

