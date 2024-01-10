#include <iostream>
using namespace std;

int binarySearch(int *Array, int size, int target)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (target == Array[mid])
            return mid;

        if (target > Array[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int Array[] = {3, 5, 9, 18, 27};
    int target = 90;
    int size = sizeof(Array) / sizeof(int);
    int found = binarySearch(Array, size, target);
    if (found == -1)
        cout << "Element not found" << endl;

    else
    {
        cout << "Element found at " << found << " index" << endl;
    }

    return 0;
}