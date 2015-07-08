#include <iostream>

using namespace std;

int main()
{
    int weight; // 0 < n < 100
    int i = 0, j = 0;
    int step = 0;
    cin >> weight;
    for (int n = 1; n <= weight - 1; n++)
    {
        i = n;
        j = weight - n;
        if (i % 2 == 0 && j % 2 == 0)
            step++;
    }
    if (step > 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
