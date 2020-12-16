#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using Graph = vector<vector<int>>;

int main() {
    //頂点数と辺数
    cout << "頂点数と辺数を入力してください：" << endl;
    int N, M;  cin >> N >> M;

    //Graph入力受け取り
    Graph G(N);
    for (int i = 0; i < M; i++){
        int a, b;
        cout << "頂点を入力してください：" << endl;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    //BFSのためのデータ構造
    vector<int> dist(N, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        //vから辿れる頂点をすべて調べる
        for(int nv : G[v]){
            if(dist[nv] != -1) continue;

            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    for(int v = 0; v < N; ++v) cout << v << ": " <<dist[v] << endl;

}