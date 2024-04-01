/*Given an empty list and a stream of N numbers. Print min, max, sum, average and
mode (optional and if there are multiple modes then print any) after insertion of each
element from the stream to the list.

Example Input:
5
2 4 3 2 -3

Example output
▪ min, max, sum, average and mode after addition of 2 is 2, 2, 2, 2, 2.
▪ min, max, sum, average and mode after addition of 4 is 2, 4, 6, 3, 4.
▪ min, max, sum, average and mode after addition of 3 is 2, 4, 9, 3, 4.
▪ min, max, sum, average and mode after addition of 2 is 2, 4, 11, 2.75, 2.
▪ min, max, sum, average and mode after addition of -3 is -3, 3, 8, 1.6, 2.
*/

#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int findMode(int array[], int size) {
    int mode = array[0];
    int maxCount = 1;
    int current = array[0];
    int currentCount = 1;
    for (int i = 1; i < size; ++i) {
        if (array[i] == current) {
            ++currentCount;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                mode = current;
            }
            current = array[i];
            currentCount = 1;
        }
    }

    if (currentCount > maxCount) {
        mode = current;
    }
    return mode;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    float sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        insertionSort(arr, n);

        int min = arr[0];
        int max = arr[i];
        float avg = sum / (i + 1);
        int mode = findMode(arr, n);
        printf("After inserting %d:\n", arr[i]);
        printf("Min: %d, Max: %d, Sum: %.2f, Average: %.2f, Mode: %d\n", min, max, sum, avg, mode);
    }
    return 0;
}
