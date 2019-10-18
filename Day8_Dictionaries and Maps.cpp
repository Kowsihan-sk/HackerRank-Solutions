int main() {
    
    map <string,int> phbook;
    long long n;
    string name;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>name;
        if(!phbook[name]){
            cin>>phbook[name];
        }
    }

    while(cin>>name)     /* for loop will not work here because there is no definte number of output trials */
    {
        if(phbook[name]){
            cout<<name<<"="<<phbook[name]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
