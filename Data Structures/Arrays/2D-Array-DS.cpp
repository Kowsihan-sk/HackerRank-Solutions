#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr)
{

    int max = 0, hGlassSum = 0;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            hGlassSum = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i][j] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
            if (hGlassSum > max)
                max = hGlassSum;
            if (i == 1 && j == 1)
                max = hGlassSum;
        }
    }

    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
