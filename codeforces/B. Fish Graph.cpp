/*
    MY Solution....
    1. find cycle
    2. when found push all of it's nodes to container or verctor or whatever
    3. loop(node: cycle) and push another two nodes provided their out of cycle
    4. have a flag to tell if find step 2, 3
    والحمدلله
 */
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
vector<vector<int>> graph;
bool done;
vector<int>parent, vis, InCycle;
void dfs(int node, int par){
    vis[node]=1;
    parent[node]=par;
    for(auto child:graph[node]){
        if(vis[child] and !done and child!=par){// then cycle
            vector<int> cycle;
            cycle.emplace_back(child);
            for(int u=node;u!=child;u=parent[u])
                cycle.emplace_back(u), InCycle[u]=true;
            cycle.emplace_back(child);
            InCycle[child]=true;




            // check outsiders
            int outCycle[2]={-1, -1}, pp=-1, m;
            for(auto specialNode: cycle) {
                if(~outCycle[0] and ~outCycle[1])break;
                outCycle[0] = outCycle[1] =pp= -1, m=0;
                for (auto child: graph[specialNode])
                    if (!InCycle[child] and m<2){
                        outCycle[m++]=child;
                        if(m==2)pp=specialNode;
                    }

            }
            // print Fish Graph
            if(~outCycle[0] and ~outCycle[1]){
                done=true;
                vector<pair<int, int>> ans;
                for(int i=0;i<(int)cycle.size()-1;i++)
                    ans.emplace_back(cycle[i],cycle[i+1]);
               ans.emplace_back(pp,outCycle[0]);
               ans.emplace_back(pp,outCycle[1]);
               cout<<"YES\n"<<ans.size()<<el;
               for(auto [u, v]:ans)
                   cout<<u<<" "<<v<<el;

            }
            for(auto &x:InCycle)x=false;
        }
    }
    for(auto &child:graph[node]){
        if(!vis[child] and !done)
            dfs(child, node);
    }
    // this node is finally fucked to death

}

void solve(){
//    Enter Graph
    int n, m; cin>>n>>m;
    graph=vector<vector<int>>(n+1);
    done=false;
    vis=parent=InCycle=vector<int>(n+1, 0);
    for(int i=1;i<=m;i++){
        int u, v; cin>>u>>v;
        graph[u].emplace_back(v);
        graph[v].emplace_back(u);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i] and !done)
            dfs(i, 0);
    }
    if(!done)cout<<"NO\n";
}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
//        cout<<el;
//    cout<<"------------------------------\n";
    }

    return 0;
}

void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
