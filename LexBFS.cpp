#include <vector>
#include <deque>
#include <unordered_set>
#include <algorithm>

using namespace std;

#define MAX_V 10000

int V;
vector<int>G[MAX_V];
vector<int>P;　// Pの与えかたが分からない

vector<int> LexBFS(){
  vector<int> sigma(V);
  deque<int>L;
  L.push_back(P);
  int i = 1;
  while(!L.empty()){
    vector<int>Pl = L.front();　L.pop_front();
    int x = *Pl.begin(); Pl.erase(Pl.begin());
    L.push_front(Pl);
    sigma[x] = i;
    for(const auto& l : L){
      sort(G[x].begin(), G[x].end());
      sort(l.begin(), l.end());
      vector<int>p;
      set_interaction(G[x].begin(), G[x].end(), l.begin(), l.end(), inserter(p, p.end()));
      if(!p.empty() && p != l){
	vector<int>diff;
	set_difference(l.begin(), l.end(), p.begin(), p.end(), inserter(diff, diff.end()));
	l = diff;
	L.push_front(p);
      }
    }
  }
  return sigma;
}


