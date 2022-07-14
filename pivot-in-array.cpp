#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s; //* OR return e;
}
int main()
{
    int nums[6] = {7, 9, 1, 2, 3, 4};
    int ans = pivot(nums, 6);
    cout << ans << endl;
    return 0;
}
