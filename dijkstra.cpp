#include <vector>
#include <queue>

using namespace std;

#define MAX_V 10

typedef pair<int, int>P;
vector<P>V[MAX_V];
int d[MAX_V];

void dijkstra(int x){
  memset(d, -1, sizeof(d));  
  priority_queue<P, vector<P>, greater<P> >q;
  q.push(P(0, x);
  d[x] = 0;
  while(!q.empty()){
    P v = q.top(); q.pop();
    for(int i=0;i<V[v.second].size();i++){
      if(d[V[v.second][i].second] == -1 || d[V[v.second][i].second] > d[v.second] + V[v.second].first){
	d[V[v.second][i].second] = d[v.second] + V[v.second].first;
	q.push(P(d[V[v.second][i].second], V[v][i].second));
      }
    }
  }
}
