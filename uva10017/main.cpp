#include <iostream>
#include <string.h>
using namespace std;
#define MAXPEG 3+1
#define MAXDISK 255+1
#define A 1
#define B 2
#define C 3
bool pegs[MAXPEG][MAXDISK];

int ndisk,mstep;
int counting=1;
int steps=0;
bool stopflag=false;
void print_status(){
    if(steps>mstep) {
        stopflag=true;
        return;
    }
    for(int i=A;i<=C;i++){
        bool hasSpace=false;
        cout<<(char)('A'+i-1)<<"=>";
        for(int j=MAXDISK-1;j>=1;j--){
            if(pegs[i][j]){
                 if(!hasSpace){
                    cout<<"  ";
                    hasSpace=true;
                }
                cout<<" "<<j;
            }
           
        }
        cout<<endl;
    }
    cout<<endl;
    steps++;
}
void move(int n,int start,int to,int dist){
    pegs[start][n]=false;
    pegs[dist][n]=true;
    print_status();
}
void hanoi(int n,int start,int to,int dist){
    if(stopflag) return;
    if(n==1){
        move(n,start,to,dist);
        return;
    }
    hanoi(n-1,start,dist,to);
    move(n,start,to,dist);
    hanoi(n-1,to,start,dist);
}


int main(){
    
    while(cin>>ndisk>>mstep && (ndisk || mstep)){
        cout<<"Problem #"<<counting++<<endl<<endl;
        steps=0;
        stopflag=false;
        memset(pegs,false,sizeof(pegs));
        for(int j=1;j<=ndisk;j++){
            pegs[1][j]=true;
        }
        print_status();
        hanoi(ndisk,A,B,C);
    }
    return 0;
    
}

