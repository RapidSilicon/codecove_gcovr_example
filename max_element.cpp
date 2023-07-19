// A function to find the maximum element in an array
int findMaxElement(const int arr[], int size) {
    if (size <= 0) {
        throw "Array size must be greater than zero.";
    }

    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

