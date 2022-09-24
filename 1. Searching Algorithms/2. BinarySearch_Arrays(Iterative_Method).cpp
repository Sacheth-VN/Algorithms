#include <iostream>
#include <vector>
using namespace std;

// Iterative implementation of Binary Search

int BinarySearch(vector<int> &a, int left, int right, int &k) // Time Complexity: O(log n)  &  Auxiliary Space: O(1)
{
    if (right < left)
    {
        cout << "Array is EMPTY." << endl;
    }

    while (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (a[mid] == k)
        {
            return mid;
        }
        else if (k > a[mid])
        {
            left = mid + 1;
        }
        else if (k < a[mid])
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr;
    int size;
    int key;
    int result;

    cout << "Enter number of elements in an array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << "Enter the element to be searched: ";
    cin >> key;

    result = BinarySearch(arr, 0, size - 1, key);

    if (result >= 0)
    {
        cout << "Element is in the index: " << result + 1;
    }
    else
    {
        cout << "Element is not found!!!";
    }

    return 0;
}