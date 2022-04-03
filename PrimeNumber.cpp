#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool flag = 0;
    cin >> n;
    int i;
    for (i = 2; i <= sqrt(n); i++)
    /* 
    i<n/2 tk bhi check kr skte h coz koi bhhi multiple us number ke half se badda nhi hoga
    i <= sqrt(n) tk check krne ka mtlab sqrt(n) se bada factor ho bhi to wo
     ek aise number ka multiple hoga jo usse chota hoga and
    usko hum laready check kr chuke honge
    like n= 36 so hum  6 tk hi check krenge
    36 jo h wo 18 se bhi divisible but 18 ke mulriples hai 9*2 ::2 ko we have checked ,
     9 is multiple of 3 and 3 we have checked
    to is approach se saare number s cover ho jayenge with less iterations
    */
    {
        if (n % i == 0)
        {
            cout << "Non-prime";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime ";
    }
    return 0;
}
