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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    //                    ** LEARNING**
    //* j ka loop saare elements ke saath minimum find krne ke liye hai
    //* j ka loop i ko baaki elements ke saath compare krega isliye i+1 se start hai
    //* i ka loop n-1 tk isliye chala coz n se ek kam me hi ho jayenge elements sort , last wala is sorted already
    //*i ka loop ek sorted array create kr rha hai...pehle 0th sort hua then 1st then 2nd------2nd last and last to sorted h already
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//ANOTHER METHOD TO DO SELECTION SORT
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
