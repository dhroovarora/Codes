https://www.geeksforgeeks.org/problems/make-binary-tree/1




class Solution {
    class Pair{
        Tree node;
        int idx;
        public Pair(Tree node,int idx){
            this.node=node;
            this.idx=idx;
        }
    }
    public Tree convert(Node head, Tree node) {
        Node tmp=head;
        ArrayList<Integer> a=new ArrayList<>();
        while(tmp!=null){
            a.add(tmp.data);
            tmp=tmp.next;
        }
        Queue<Pair> q=new ArrayDeque<>();
        Tree root=new Tree(a.get(0));
        q.add(new Pair(root,0));
        while(q.size()>0){
            Pair p=q.remove();
            Tree nodee=p.node;
            int i=p.idx;
            if(2*i+1>=a.size()){
                nodee.left=null;
                nodee.right=null;
            }else{
                if(2*i+1<a.size()){
                    Tree left=new Tree(a.get(2*i+1));
                    nodee.left=left;
                    q.add(new Pair(left,2*i+1));
                }
                if(2*i+2<a.size()){
                    Tree right=new Tree(a.get(2*i+2));
                    nodee.right=right;
                    q.add(new Pair(right,2*i+2));
                }
            }
        }
        return root;
        
    }
}