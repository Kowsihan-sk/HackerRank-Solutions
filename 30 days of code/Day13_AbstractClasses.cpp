#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook{
    string top,mid;
    int down;

    public:
 
    MyBook(string t,string a,int p){
        top=t;
        mid=a;
        down=p;

    }
   
    void display(){
        cout<<"Title: "<<top<<endl;
        cout<<"Author: "<<mid<<endl;
        cout<<"Price: "<<down<<endl;
    }
};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
