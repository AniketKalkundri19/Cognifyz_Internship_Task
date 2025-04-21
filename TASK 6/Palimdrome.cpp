#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter your String to check for Palindrome :: ";
    string st , rst ;
    cin>>st;
    for(int i = st.length()-1 ; i >= 0  ; i--){
        rst += st[i];
    }
    if(rst == st){
        cout<<"given string is PALIMDROME\n";
        cout<<rst;
    }
    else {
        cout<<"given string is NOT PALIMDROME\n";
    }
}