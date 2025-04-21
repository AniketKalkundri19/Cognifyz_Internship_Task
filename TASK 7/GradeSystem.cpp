#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number of Subjects :: ";
    int n , sum ;
    float grade ;
    cin>>n;
    int arr[n];
    cout<<"\nEnter Marks of each subject :: ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] < 35){
            cout<<"Minimum marks criteria is not satisfied, So Grade can't be Calculated\n";
            return 1;
        }
    }
    for(int i = 0 ; i < n ; i++ ){
        sum += arr[i];
    }
    grade = ( (static_cast<float>(sum))/n ) ;
    cout<<"\nGrade of Student :: "<<grade<<"%";
    return 0;
}