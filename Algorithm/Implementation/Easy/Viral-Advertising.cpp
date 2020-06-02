#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n)
{

    vector<int> s(n);

    s[0] = 2;
    int total_likes = s[0];
    for (int i = 1; i < n; i++)
    {
        s[i] = (s[i - 1] * 3) / 2;
        total_likes += s[i];
    }

    return total_likes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
