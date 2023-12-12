https://my.newtonschool.co/playground/code/sgpdqz7xd26b




#include <iostream>
#include <vector>

using namespace std;
int dfs(int node, const vector<vector<int>>& graph) {
    int count = 0;
    for (int subordinate : graph[node]) {
        count += dfs(subordinate, graph);
    }
    return 1 + count;
}


vector<int> countSubordinates(int n, const vector<int>& bosses) {

    vector<vector<int>> graph(n + 1);
    for (int i = 1; i < n; ++i) {
        graph[bosses[i - 1]].push_back(i + 1);
    }

    vector<int> counts(n, 0);
    for (int i = 1; i <= n; ++i) {
        counts[i - 1] = dfs(i, graph) - 1;
    }

    return counts;
}

int main() {
    int n;
    cin >> n;

    vector<int> bosses(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> bosses[i];
    }

    vector<int> result = countSubordinates(n, bosses);

    for (int i = 0; i < n; ++i) {
        cout << result[i] << ' ';
    }

    return 0;
}