#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int nodeCount;
        cin >> nodeCount;
        string colorString;
        cin >> colorString;
        
        vector<vector<int>> adjacencyList(nodeCount + 1);
        vector<int> nodeDegree(nodeCount + 1, 0);
        
        for (int edgeIndex = 0; edgeIndex < nodeCount - 1; edgeIndex++) {
            int sourceNode, targetNode;
            cin >> sourceNode >> targetNode;
            adjacencyList[sourceNode].push_back(targetNode);
            adjacencyList[targetNode].push_back(sourceNode);
            nodeDegree[sourceNode]++;
            nodeDegree[targetNode]++;
        }
        
        // BFS from red nodes to find distance
        vector<int> distanceFromRed(nodeCount + 1, -1);
        queue<int> bfsQueue;
        
        for (int nodeIdx = 1; nodeIdx <= nodeCount; nodeIdx++) {
            if (colorString[nodeIdx - 1] == '1') {
                bfsQueue.push(nodeIdx);
                distanceFromRed[nodeIdx] = 0;
            }
        }
        
        while (!bfsQueue.empty()) {
            int currentNode = bfsQueue.front();
            bfsQueue.pop();
            
            for (int neighbor : adjacencyList[currentNode]) {
                if (distanceFromRed[neighbor] == -1) {
                    distanceFromRed[neighbor] = distanceFromRed[currentNode] + 1;
                    bfsQueue.push(neighbor);
                }
            }
        }
        
        // For each black node, count neighbors that are "closer or equal distance and reachable"
        double totalExpectedOperations = 0.0;
        
        for (int nodeIdx = 1; nodeIdx <= nodeCount; nodeIdx++) {
            if (colorString[nodeIdx - 1] == '0') {
                // Black node: count neighbors that help it become red
                int helpingNeighbors = 0;
                
                for (int neighbor : adjacencyList[nodeIdx]) {
                    // Count if neighbor is red OR closer to red
                    if (colorString[neighbor - 1] == '1' || 
                        distanceFromRed[neighbor] < distanceFromRed[nodeIdx]) {
                        helpingNeighbors++;
                    }
                }
                
                if (helpingNeighbors > 0) {
                    totalExpectedOperations += (double)nodeDegree[nodeIdx] / helpingNeighbors;
                }
            }
        }
        
        cout << fixed << setprecision(15) << totalExpectedOperations << "\n";
    }
    
    return 0;
}
