#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // if key not found
}

int main() {
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[7] = {1, 2, 3, 4, 5, 6, 7};

    int evenIndex = binarySearch(even, 8, 7);
    cout << evenIndex;

    return 0;
}
