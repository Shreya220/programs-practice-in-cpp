#include <iostream>
using namespace std;
bool linearSearch(int *arr, int size, int key)
{
    // base case
    if (size == 0)
    {
        // not found
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}
bool binarySearch(int *arr, int start, int end, int key)
{
    //* base case
    // element not found
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    // element found
    if (arr[mid] == key)
    {
        return true;
    }

    if (key > arr[mid])
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}
int main()
{
    int n;
    cin >> n;
    int s = 0, e = n - 1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    // bool ans = linearSearch(arr, n, key);
    bool ans = binarySearch(arr, s, e, key);
    if (ans)
    {
        cout << "The key is present in array";
    }
    else
    {
        cout << "The key is not present in array";
    }
    return 0;
}
