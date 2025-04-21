#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER NUMBER OF TERMS :: ";
    int n , z;
    cin>>n;
    cout<<"Fibonacci series of "<<n<<" terms ::\n";
    int a = 0;
    int b = 1;
    for(int i = 0 ; i < n ; i++){
        cout<<a<<"\t";
        z = a + b ; 
        a = b ;
        b = z ; 
    }
    return 0;
}