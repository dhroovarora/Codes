https://www.geeksforgeeks.org/problems/trie-insert-and-search0651/1




// trie node
/*
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};
*/
class Solution
{
public:
    void insert(struct TrieNode *root, string key){
        TrieNode *node = root;
        for(auto ch: key) {
            if(!node->children[ch - 'a'] )
                node->children[ch - 'a'] = new TrieNode();
            node = node->children[ch - 'a'];
        }
        node->isLeaf = true;
    }
    bool search(struct TrieNode *root, string key) {
        TrieNode *node = root;
        for(auto ch: key) {
            if(!node->children[ch - 'a'])
                return false;
            node = node->children[ch - 'a'];
        }
        return node->isLeaf;
    }
};