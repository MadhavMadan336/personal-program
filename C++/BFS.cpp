#include <iostream>
#include <vector>
#include <queue>
void BFS(int start, const std::vector<std::vector<int>>& adjList) {
    std::vector<bool> visited(adjList.size(), false);
    std::queue<int> queue;
    visited[start] = true;
    queue.push(start);
    while (!queue.empty()) {
        int node = queue.front();
        std::cout << node << " ";
        queue.pop();
        for (int i = 0; i < adjList[node].size(); ++i) {
            if (!visited[adjList[node][i]]) {
                visited[adjList[node][i]] = true;
                queue.push(adjList[node][i]);
            }
        }
    }
}
int main() {
    std::vector<std::vector<int>> adjList = {
        {1, 2}, {2}, {0, 3}, {3}
    };
    BFS(2, adjList);
    return 0;
}
