#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p)
{
    /*
     * Write your code here.
     */

    int mid = n / 2, count = 0;

    if (n % 2 != 0)
        n--;

    if (mid <= n - p)
    {
        for (int i = 1; i < p; i += 2)
            count++;
    }
    else
    {
        for (int i = n; i > p; i -= 2)
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

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
