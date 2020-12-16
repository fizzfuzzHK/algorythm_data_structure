// https://qiita.com/drken/items/4a7869c5e304883f539b

#include <iostream>
#include <vector>

using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v){
    seen[v] = true; //vを訪問済みにする

    //vからいける頂点 next_vについて
    //例えばvが0の場合、0から訪問できる各頂点について、最も深く到達できる終点を調べていく
    for (auto next_v : G[v]){
        if(seen[next_v]) continue; //next_vが訪問済みだったらスルー
        dfs(G, next_v); //再帰的に探索
    }
}

int main(){
    //頂点数と辺数
    cout << "頂点数と辺数を入力してください" << endl;
    int N, M; cin >> N >> M;

    //グラフ入力を受け取る
    Graph G(N);
    for (int i = 0; i < M; i++){
        int a,b;
        cout << "頂点を入力してください" << endl;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false);
    dfs(G, 0);
}