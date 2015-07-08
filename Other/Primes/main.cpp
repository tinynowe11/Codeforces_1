#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m = 0, n = 0;
    int step = 0;
    cin >> n;

    for(int j = 3; j < n; j++)
    {
        for (int i = 1; i < n; i++)
        {
            if(j % i == 0)
                step++;
        }
        if (step == 2)
            cout << j << " ";
        step = 0;
    }

    return 0;
}
