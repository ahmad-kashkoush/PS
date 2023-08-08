    adj = vector< vector<int> >(n);
    // vis = vector<bool>(n, false);
    for (int i = 0;i < n - 1;i++) {
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    int cnt = 0;
    cout << bfs(0);