class Solution{
    unordered_map<int,int>m;
    int index =0;
    public:
    Node* solve(int pre[] ,int in[],int low,int high){
        if(low>high) return NULL;
        Node* res = new Node(pre[index++]);
        if(low == high) return res;
        int  mid = m[res->data];
        res->left = solve(pre,in,low,mid-1);
        res->right = solve(pre,in,mid+1,high);
        return res;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        index =0;
        m.clear();
        for(int i=0;i<n;i++){
            m[in[i]]  = i;
        }
        Node* root = solve(pre,in,0,n-1);
        return root;
    }
};
