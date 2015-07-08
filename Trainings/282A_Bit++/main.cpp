#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int x = 0;
    int n = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "++X" || str == "X++")
            x++;
        if (str == "--X" || str == "X--")
            x--;
    }

    cout << x;

}
