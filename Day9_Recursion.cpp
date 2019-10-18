#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if(n<=1)
        return 1;
    else{
        for(int i=n-1; i>1; i--){
            n*=i;
        }
        return n;
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
