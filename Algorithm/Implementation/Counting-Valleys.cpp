#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s)
{

    int count = 0;
    int sea_level = 0, flag = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'U')
        {
            sea_level--;
            flag = 1;
        }
        else
        {
            sea_level++;
            flag = 0;
        }

        if ((sea_level == 0) && flag)
            count++;
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
