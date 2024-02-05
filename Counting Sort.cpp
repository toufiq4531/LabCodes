#include <iostream>
using namespace std;

void countingSort(int inputArray[], int N) {
    // Finding the maximum element of inputArray[]
    int M = 0;
    for (int i = 0; i < N; i++)
        M = max(M, inputArray[i]);

    // Initializing countArray[]
    int countArray[M + 1];

    // Mapping each element of inputArray[] as an index of countArray[] array
    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;

    // Calculating prefix sum at every index of array countArray[]
    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];

    // Creating outputArray[] from countArray[] array
    int outputArray[N];
    for (int i = N - 1; i >= 0; i--) {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    // Printing the sorted output array
    for (int i = 0; i < N; i++)
        cout << outputArray[i] << " ";
}

int main() {
    // Input array
    int inputArray[] = {4, 3, 12, 1, 5, 5, 3, 9};
    int N = sizeof(inputArray) / sizeof(inputArray[0]);

    // Sort the input array using countingSort
    countingSort(inputArray, N);

    return 0;
}
