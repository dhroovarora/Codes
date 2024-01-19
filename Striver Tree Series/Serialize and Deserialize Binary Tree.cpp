https://www.codingninjas.com/studio/problems/serialize-and-deserialize-binary-tree_920328?leftPanelTabValue=PROBLEM




/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

string serializeTree(TreeNode<int>*r){
 if(!r)
    return "";
 string ans="";
 queue<TreeNode<int>*>q;
 q.push(r);
 while(!q.empty()){
   auto top=q.front();q.pop();
   if(!top)
    ans+=("#,");
   else
    ans+=(to_string(top->data)+",");
   if(top){
       q.push(top->left);
       q.push(top->right);
   }
 }
 return ans;
}
TreeNode<int>* deserializeTree(string &s){
if(s.size()==0)return NULL;
stringstream x(s);
string st;
getline(x,st,',');
 queue<TreeNode<int>*>q;
 TreeNode<int>*r=new TreeNode<int>(stoi(st));
 q.push(r);
 while(!q.empty()){
    auto top=q.front();
    q.pop();
    getline(x,st,',');
    top->left = st=="#"?NULL:new TreeNode<int>(stoi(st));
    if(st!="#")
        q.push(top->left);
    getline(x,st,',');
    top->right = st=="#"?NULL:new TreeNode<int>(stoi(st));
    if(st!="#")
        q.push(top->right);
 }
 return r;
}