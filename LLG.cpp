#include <iostream>
using namespace std;
int main() {
    /*Checking acceptance of strings for the following left linear grammar:
    B->Ba|Bb|Aa
    A->E*/
    cout<<"Checking acceptance of strings for the following left linear grammar:"<<endl;
    cout<<"B->Ba|Bb|Aa"<<endl;
    cout<<"E"<<endl;
    
    vector<string> a;
    cout<<"Enter the number of strings: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the input strings: "<<endl;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }
    for(int i=0;i<n;i++){
        if(a[i][0]!='b'){
            cout<<a[i]<<" is accepted by the above language. "<<endl;
        }
    }
    return 0;
}