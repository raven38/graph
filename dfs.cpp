#include <vector>

using namespace std;

#define MAX_V 10

vector<int>V[MAX_V];
int d[MAX_V];

void dfs(int x){
  d[x] = 0;
  for(int i=0;i<V[x].size();i++){
    if(d[V[x][i]] == -1) continue;
    dfs(V[x][i]);
  }
}

int init(){
  memset(d, -1, sizeof(d));
}
