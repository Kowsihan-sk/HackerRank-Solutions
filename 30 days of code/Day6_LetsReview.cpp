#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s; /* Getline didn't worked here (don't know why) */
            for(int j=0; j<s.length(); j++){
                if(j%2==0)cout<<s[j];
            }
            cout<<" ";
            for(int j=0; j<s.length(); j++){
                if(j%2!=0)cout<<s[j];
            }
            cout<<endl;
        }


    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
