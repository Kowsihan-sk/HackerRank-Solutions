#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i=0; i < n; i++) {

        cin>>arr[i];
    }
    for (int j=n-1; j>=0; j--)
        cout<<arr[j]<<" ";

    return 0;
}
