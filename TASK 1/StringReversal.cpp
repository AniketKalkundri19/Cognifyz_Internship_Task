#include<iostream>
#include<string>
using namespace std;
int main(){
    string a , b ;
    cout<<"ENTER YOUR STRING :: ";
    cin>>a;
    cout<<"\n"<<a;
    for(int i = a.length()-1 ; i >= 0 ; i-- )
    {
        b += a[i];
    }

    cout<<"\n" <<b;
    return 0;
}