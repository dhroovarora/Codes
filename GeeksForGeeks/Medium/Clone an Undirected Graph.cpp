https://www.geeksforgeeks.org/problems/clone-graph/1




// struct Node {
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };

class Solution { 
    unordered_map<Node*, Node*> vis;
    public:
    Node* cloneGraph(Node* node) {
    if(!node)
        return NULL;
    if(vis.find(node) != vis.end())
        return vis[node];       
    Node*nn = new Node(node->val);
    vis[node] = nn;  
    for(Node*x : node->neighbors)
        nn->neighbors.push_back(cloneGraph(x));
        return nn;
    }
};