#include<iostream>
#include<string>
using namespace std;
struct item{    //structure of node where data is stored
    int id;
    string name;
    int quantity;
    double price;
    item* next;     //pointer of data-type item which points to the next node   [node][data]---->[node][data]
};
item* head = nullptr;       //head(global pointer) always points first node of linked list and if it is empty then returns nullpointer

void InsertItems(){
    item* newItem = new item();
    cout<<"\nEnter Item ID :: ";
    cin>>newItem->id;
    cout<<"\nEnter Item NAME :: ";
    cin.ignore();
    getline(cin , newItem->name);   //read string with whitespace
    cout<<"\nEnter Item QUANTITY :: ";
    cin>>newItem->quantity;
    cout<<"\nEnter Item PRICE :: ";
    cin>>newItem->price;
    newItem->next = head ;  //add new item at first position
    head = newItem;
    
}
void DisplayItems(){
    if(head == nullptr){
        cout<<"\nInventory Is Empty.";
        return ; 
    }
    
    cout<<"\nINVENTORY LIST ::\n";
    cout<<"\tID\tNAME\tPRICE\n";

    item* current = head;
    while( current != nullptr){
        cout<<"\t"<<current->id<<"\t"<<current->name<<"\t"<<current->price<<"\n";
        current = current->next ;
    } 
}
void SearchByID(){
    if(head == nullptr){
        cout<<"\nInventory Is Empty.";
        return ; 
    }

    cout<<"\nEnter ID of Item to search :: ";
    int newID;
    cin>>newID;
    item* current = head;
    while(current != nullptr){
        if(current->id == newID ){
            cout<<"\nItem FOUND :: \n ";
            cout<<"\tID\tNAME\tPRICE\n";
            cout<<"--------------------------------\n";
            cout<<"\t"<<current->id<<"\t"<<current->name<<"\t"<<current->price<<"\n";
            return;
            
        }
        current = current->next ;

    }
    cout<<"\nItem with ID "<<newID<<" not FOUND.";
}
void SearchByNAME(){
    if(head == nullptr){
        cout<<"\nInventory Is Empty.";
        return ; 
    }

    cout<<"\nEnter NAME of Item to search :: ";
    string newNAME;
    cin.ignore();
    getline(cin , newNAME);
    item* current = head;
    while(current != nullptr){
        if(current->name == newNAME){
            cout<<"\nItem FOUND :: \n ";
            cout<<"\tID\tNAME\tPRICE\n";
            cout<<"--------------------------------\n";
            cout<<"\t"<<current->id<<"\t"<<current->name<<"\t"<<current->price<<"\n";
            return ;
        }
        current = current->next ;
    }
    cout<<"Item with NAME "<<newNAME<<" not FOUND.";

}
int main(){
    int op;
    do{
    cout<<"\n------------------INVENTORY MANAGEMENT SYSTEM------------------\t\n\n";
    cout<<"1.   Insert Item\n";
    cout<<"2.   Display Item\n";
    cout<<"3.   Search Item by ID\n";
    cout<<"4.   Search Item by NAME\n";
    cout<<"5.   EXIT\n";
    cout<<"------------------------------------------------------------------------";
    cout<<"\nEnter option :: ";
    cin>>op;
    cout<<"------------------------------------------------------------------------";
    
        switch(op)
            {
            case 1:
                InsertItems();
                break;
            
            case 2:
                DisplayItems();
                break;
            
            case 3:
                SearchByID();
                break;
            
            case 4:
                SearchByNAME();
                break;

            default:
                break;
                
            }
    }while(op != 5);
    return 0;
}