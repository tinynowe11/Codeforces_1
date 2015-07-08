#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n*3];
    for (int i = 0; i < n*3; i++)
    {
        cin >> arr[i];
    }

    int counter = 0;
    int i = 0;

    for (int i = 0; i < n*3; i = i + 3)
    {
        if (arr[i] + arr[i+1] + arr[i+2] >= 2)
        {
            counter++;
        }
    }
    cout << counter;

    return 0;
}
