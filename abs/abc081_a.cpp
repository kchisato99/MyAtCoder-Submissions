// Placing Marbles
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int sum = 0;
    while (a)
    {
        sum = sum + a%10;
        a = a/10;
    }

    cout << sum << endl;

    return 0;
}
