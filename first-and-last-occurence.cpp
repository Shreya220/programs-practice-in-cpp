#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;//! if not in array return -1
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1; //* leftmost/first occurence check krni hai isliye left side dekhenge ek aur baar
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;//! if not in array return -1
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1; //* rightmost/last occurence check krni hai isliye right side dekhenge ek aur baar
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7};
    cout << firstOcc(arr, 12, 7) << " " << lastOcc(arr, 12, 7);
    return 0;
}
