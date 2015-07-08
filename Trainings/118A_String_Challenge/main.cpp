#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <cctype>

//using namespace std;

int main()
{

    std::string st;
    std::string stt;
    std::string sr;
    sr=".";
    st="";
    stt="";

    std::string s;
    std::cin >> s;
    std::transform(s.begin(), s.end(), s.begin(), tolower);

    int j = 0;
    int l =s.length();
    for (int i = 0; i < l; i++)
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'u' &&
            s[i] != 'A' && s[i] != 'E' && s[i] != 'U' &&
            s[i] != 'o' && s[i] != 'O' && s[i] != 'y' &&
            s[i] != 'Y' && s[i] != 'i' && s[i] != 'I')
            {
                stt.append(sr);
                st=s[i];
                stt.append(st);
            }

    std::cout << stt;

    return 0;
}
