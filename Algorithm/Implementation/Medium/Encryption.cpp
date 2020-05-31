#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s)
{
    int k = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != ' ')
            s[k++] = s[i];
    }
    string str = s.substr(0, k);

    auto n = str.size();
    int row = round(sqrt(n));
    int column;
    if (row >= sqrt(n))
        column = row;
    else
        column = row + 1;

    string ans = "";
    for (int j = 0; j < column; ++j)
    {
        for (int i = j; i < n; i += column)
            ans += s[i];
        ans += ' ';
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
