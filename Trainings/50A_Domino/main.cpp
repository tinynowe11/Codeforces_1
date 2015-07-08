#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    if ((m * n) % 2 == 0)
    {
        cout << 0.5 * m * n;
    }

    else
    {
        cout << 0.5 * (m * n - 1);
    }

    return 0;
}
