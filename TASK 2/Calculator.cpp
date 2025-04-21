#include<iostream>
using namespace std;
int main(){
    double a , b ;
    for(int i = 0 ; i < 10 ; i++){
    cout<<"ENTER TWO NUMBERS :: ";
    cin>>a>>b;
    cout<<"ENTER ARITHMETIC OPERATOR (+ , - , * , / , %) :: ";
    char c;
    cin>>c;
    if(c == '+'){
        cout<<"ADDITION :: "<<a+b<<"\n";
    }
    else if(c == '-'){
        cout<<"SUBTRACTION :: "<<a-b<<"\n";
    }
    else if(c == '*'){
        cout<<"MULTIPLICATION :: "<<a*b<<"\n";
    }
    else if(c == '/'){
        if(a > b && b != 0){
        cout<<"DIVISION :: "<<a/b<<"\n";
        }
        else {
            cout<<"Result is approximately ZERO\n";
        }
    }
    else if(c == '%'){
        int y = static_cast<int>(a);
        int z = static_cast<int>(b);
        int x;
        x = y % z ; 
        cout<<"REMAINDER :: "<<x<<"\n";
    }
    else {
        cout<<"INVALID OPERATOR :: (re-enter the operator) \n";
    }
    }
return 0;
}