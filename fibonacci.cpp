#include <iostream>
using namespace std;

void fibonacci(int num)
{
    int term1 = 0;
    int term2 = 1;
    for (int i = 0; i < num; i++)
    {
        cout << term1 << endl;
        int next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fibonacci(n);

    return 0;
}
