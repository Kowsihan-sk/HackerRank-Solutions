#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice)
{

    vector<int> alice_rankings(alice.size());
    scores.erase(unique(scores.begin(), scores.end()), scores.end());
    sort(scores.begin(), scores.end());

    int index = 0, n = scores.size();
    for (int i = 0; i < alice.size(); i++)
    {
        while (n > index && alice[i] >= scores[index])
        {
            index++;
        }
        alice_rankings[i] = n + 1 - index;
    }
    return alice_rankings;
    // int temp = 0;
    // for (int i = alice.size() - 1; i >= 0; i--)
    // {
    //     bool flag = true;
    //     for (int j = temp; j < scores.size(); j++)
    //     {
    //         if (alice[i] >= scores[j])
    //         {
    //             alice_rankings[i] = j + 1;
    //             temp = j;
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if (flag)
    //         alice_rankings[i] = scores.size() + 1;
    // }

    // return alice_rankings;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int scores_count;
    cin >> scores_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string scores_temp_temp;
    getline(cin, scores_temp_temp);

    vector<string> scores_temp = split_string(scores_temp_temp);

    vector<int> scores(scores_count);

    for (int i = 0; i < scores_count; i++)
    {
        int scores_item = stoi(scores_temp[i]);

        scores[i] = scores_item;
    }

    int alice_count;
    cin >> alice_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string alice_temp_temp;
    getline(cin, alice_temp_temp);

    vector<string> alice_temp = split_string(alice_temp_temp);

    vector<int> alice(alice_count);

    for (int i = 0; i < alice_count; i++)
    {
        int alice_item = stoi(alice_temp[i]);

        alice[i] = alice_item;
    }

    vector<int> result = climbingLeaderboard(scores, alice);

    for (int i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
