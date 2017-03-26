#include <vector>
#include <queue>

using namespace std;

#define MAX_V 10

vector<int>V[MAX_V];
int d[MAX_V];

void bfs(int x){
  queue<int>q;
  q.push(x);
  d[x] = 0;
  while(!q.empty()){
    int v = q.top(); q.pop();
    for(int i=0;i<V[v].size();i++){
      if(d[V[v][i]] == -1) continue;
      q.push(V[v][i]);
    }
  }
}

int init(){
  memset(d, -1, sizeof(d));
}
