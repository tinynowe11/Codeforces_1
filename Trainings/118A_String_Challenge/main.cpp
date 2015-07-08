#include <iostream>
//#include <string>
//#include <cstring>

using namespace std;

int main()
{
    char str[101];
    char str2[101];

    cin >> str;
    int j = 0;
    for (int i = 0; i < 101; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'U' &&
            str[i] != 'o' && str[i] != 'O' && str[i] != 'y' &&
            str[i] != 'Y' && str[i] != 'i' && str[i] != 'I')
            {
                str2[j] = '.';
                str2[j+1] = str[i];

                j = j + 2;
            }
    }

    cout << str2;

    return 0;
}
