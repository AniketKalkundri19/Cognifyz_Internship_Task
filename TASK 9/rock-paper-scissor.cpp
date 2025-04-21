#include<iostream>
#include<cstdlib>
#include<ctime>
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
// rock beats scissors
//paper beats rock
//scissors beats paper
using namespace std;
int main(){
    srand((unsigned int) (time(NULL)));
    int player = 0 , comp = 0 ; 
    bool draw = false;
    for(int i = 0 ; i < 10 ; i++){
    do{
        cout<<"\nEnter your throw :\n";
        cout<<"ROCK - '1'\nPAPER - '2'\nSCISSORS - '3'\nSELECT : ";
        cin>>player;
        comp = ( rand() % 3) + 1 ;
        if(comp == 1){
            cout<<"Computer throws ROCK.\n";
        }
        else if(comp == 2){
            cout<<"Computer throws PAPER.\n";
        }
        else if(comp == 3){
            cout<<"Computer throws SCISSORS.\n";
        }
        if( player == 1 && comp == 2){
            cout<<"Computer wins!\n";
        }
        else if( player == 2 && comp == 1){
             cout<<"Player wins!\n";
        }
        else if( player == 1 && comp == 3){
             cout<<"Player wins!\n";
        }
        else if( player == 3 && comp == 1){
             cout<<"Computer wins!\n";
        }
        else if( player == 3 && comp == 2){
             cout<<"Player wins!\n";
        }
        else if( player == 2 && comp == 3){
             cout<<"Computer wins!\n";
        }
        else if( player == comp ){
            cout<<"Draw! play again...\n";
        }
    }while(draw);
    }
    return 0;
}