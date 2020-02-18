#include <iostream>

using namespace std;

int n;

struct ticket{
    int cost;
    int reachable[10][10];
};

int main(){

    
    while(cin>>n && n){
        ticket *_tickets=new ticket[n];
        for(int i=0;i<n;i++){
            int dest_num;
            cin>>_tickets[i].cost;
            cin>>dest_num;
            int *arr=new int[dest_num];
            for(int j=0;j<dest_num;j++){
                cin>>arr[j]
            }
            delete[] _tickets;
        }
        
    }
    return 0;
}