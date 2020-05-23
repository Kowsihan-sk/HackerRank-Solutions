#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    Difference(vector<int> A){
        elements = A;
    }
    
    void computeDifference(){
        int max=elements[0] , min=elements[0];

    for(int i=1; i<elements.size(); i++){
        
        if(elements[i]<min) min=elements[i];
        if(elements[i]>max) max=elements[i];
    }

    maximumDifference = max - min;
    }
	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
