#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = 1; // this is for the iteration i.e. for ith iteration counter will be i and for loop will go till n-i
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//ANOTHER METHOD FOR BUBBLE SORT
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i < n;i++)
    {
        //for round 1 to n-1
        for(int j = 0; j < n - i; j++)
        {
            //process elements till n-i th index
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
