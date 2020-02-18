#include <iostream>
#include <string.h>
using namespace std;

#define maxnode 25
bool roadmap[maxnode+1][maxnode+1];
int maxsteps=0;
int n,m;
void dfs_visit(int i,int len){
    for(int j=0;j<n;j++){
        if(roadmap[i][j]){
            roadmap[i][j]=roadmap[j][i]=false;
            dfs_visit(j,len+1);
            roadmap[i][j]=roadmap[j][i]=true;
        }
    }
    if(len > maxsteps) maxsteps = len;

}
void dfs(){

    for(int i=0;i<n;i++){
        dfs_visit(i,0);
    }
    cout<<maxsteps<<endl;
}


int main(){
    while(cin>>n>>m && (n || m) ){
        maxsteps=0;
        memset(roadmap,false,sizeof(roadmap));
        for(int i=0;i<m;i++){
            int from,to;
            cin>>from>>to;
            roadmap[from][to]=roadmap[to][from]=true;
        }
        dfs();
    }
}