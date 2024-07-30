#include <iostream>
#include <vector>
#include <stack>
void DFS(int start, const std::vector<std::vector<int>>& adjList, std::vector<bool>& visited) {
    std::stack<int> stack;
    stack.push(start);
    while (!stack.empty()) {
        int node = stack.top();
        stack.pop();
        if (!visited[node]) {
            std::cout << node << " ";
            visited[node] = true;
        }
        for (int i = adjList[node].size() - 1; i >= 0; --i) {
            if (!visited[adjList[node][i]]) {
                stack.push(adjList[node][i]);
            }
        }
    }
}
int main() {
    std::vector<std::vector<int>> adjList = {
        {1, 2}, {2}, {0, 3}, {3}
    };
    std::vector<bool> visited(adjList.size(), false);
    DFS(2, adjList, visited);
    return 0;
}
