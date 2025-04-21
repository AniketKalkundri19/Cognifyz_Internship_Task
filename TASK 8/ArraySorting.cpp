#include<iostream>
using namespace std;
int main(){
    cout<<"Enter length of array :: ";
    int n , temp ;
    cin>>n;
    int arr[n];
    cout<<"\nEnter "<<n<<" array elements ::";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Ascending order or Decending order (A or D)\n ";
    char op;
    cin>>op;
    if( op == 'A'){
        for( int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n-i-1 ; j++){
                if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        }
    }
    else if( op == 'D'){
         for( int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n-i-1 ; j++){
                if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        }
    }
    else{
        cout<<"Enter valid option....\n";
        return 1;
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}