#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int reverse=0;
    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        reverse = reverse * 10 + rem;
    }
    
    cout << "Reversed number: " << reverse;
    return 0;
}
