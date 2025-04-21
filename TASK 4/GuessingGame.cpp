#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand((unsigned int) time(NULL)) ; //random number function from cstdlib
int number  = ( rand() % 100 ) + 1 ;
int guess = 0;
do{
cout<<"\nEnter your Guess (1-100) :: ";
cin>>guess;
if(guess < number){
    cout<<"put HIGHER value";
}
else if(guess > number){
    cout<<"put LOWER value";
}
else{
    cout<<"SUCCESSFULLY PREDICTED :: "<<guess;
}
}while(guess != number);
}
