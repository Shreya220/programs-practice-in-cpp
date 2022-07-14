#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int binarySearch(int arr[], int size, int key)
{
    int s = 0;    // starting element ka index
    int e = size - 1; // ending element ka index
    while (s <= e)
    {
        //** agar s e ke baad me (e ke aage) aa jata h to hume pta lag jayega ki element nhi h array me and return -1
        int mid = s + (e - s)/2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
            e = mid - 1;

        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int n, key, i;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key: ";
    cin >> key;

    // ** LINEAR SEARCH **
    // for (i = 0; i < n; i++)
    // {
    //     if (key == arr[i])
    //         break;
    // }
    // if (i == n)
    //     cout << "-1";
    // else
    //     cout << i;
    cout << linearSearch(arr, n, key) << endl;

    // ** BINARY SEARCH **
    cout << binarySearch(arr, n, key);
    return 0;
}
