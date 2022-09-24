#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int> &a, int &s, int &k) // Time complexity: O(n)  &  Auxiliary Space: O(1)
{
    int i;
    for (i = 0; i < s; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr; // Array
    int size;        // No of Elements
    int key;         // Element to be searched
    int result;      // Position of key

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << "Enter the element to be searched in the array: ";
    cin >> key;

    result = LinearSearch(arr, size, key);

    if (result > 0)
        cout << "Element is in " << result + 1 << "'th position.";
    else
        cout << "Element not found!!!";

    return 0;
}