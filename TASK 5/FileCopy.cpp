#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char line[200] , source[20] , destination[20] ;
    cout<<"Enter source file name :: ";
    cin>>source;
    cout<<"Enter destination file name :: ";
    cin>>destination;
    ofstream fout;
    fout.open(destination , ios::out);
    ifstream fin;
    fin.open(source , ios::in);
    if(!fin){
        cout<<"Source File not FOUND \n";
        exit(0);
    }
while( fin.eof() == 0) {
    fin.getline(line , sizeof(line));
    fout<<line<<"\n";
}
cout<<"File Copied Successfully.....\n";
fin.close();
fout.close();
return 0;

}