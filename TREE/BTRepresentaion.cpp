#include<bits/stdc++.h>
using namespace std;

class BTNode{
public:    
    int val;
    BTNode* left;
    BTNode* right;

    BTNode(int value){
        this->val = value;
        this->left = nullptr;
        this->right = nullptr;
    }

    BTNode(int val, BTNode *l, BTNode *r){
        this->val = val;
        this->left = l;
        this->right = r;
    }
};

void inorder_traversal(BTNode *root){
    if(root == nullptr){
        return;
    }

    inorder_traversal(root->left);
    cout << root -> val << " ";
    inorder_traversal(root-> right);
}

void inorder_traversal_iterative(BTNode *root){
    vector<int> ans;
    if (root == nullptr) return;

    stack<BTNode*> st;
    BTNode* node = root;

    while(true){
        if(node != nullptr){
            st.push(node);
            node = node -> left;
        }
        else{
            if(st.empty() == true) break;

            node = st.top();
            st.pop();
            ans.push_back(node -> val);
            node = node -> right; 
        }
    }
    for(auto x : ans){
        cout << x << " ";
    }    
}

void postorder_traversal(BTNode *root){
    if(root == nullptr){
        return;
    }

    postorder_traversal(root->left);
    postorder_traversal(root-> right);
    cout << root -> val << " ";
}

void postorder_traversal_iterative(BTNode *root){
    stack<BTNode *> st;
    vector<int> ans;

    if(root == nullptr) return;
    st.push(root);

    while (!st.empty())
    {
        int size = st.size();

        for(int i = 0; i < size; i++){
            BTNode* current = st.top();
            if(current -> right != nullptr) st.push(current -> right); 
            if(current -> left != nullptr) st.push(current -> left); 

            st.pop();
            ans.push_back(current -> val);
        }
    }

    for(auto x : ans)
        cout << x << " ";   
}

void postorder_2_stack(BTNode *root){
    stack<BTNode *> st1;
    stack<BTNode *> st2;

    if(root == nullptr) return;

    st1.push(root);
    while(!st1.empty()){
        BTNode* node = st1.top();
        st1.pop();

        st2.push(node);
        if(node -> left != nullptr) st1.push(node -> left);
        if(node -> right != nullptr) st1.push(node -> right);
    }

    while(!st2.empty()){
        cout << st2.top() -> val << " ";
        st2.pop();
    }
}

void preorder_traversal(BTNode *root){
    if(root == nullptr){
        return;
    }

    cout << root -> val << " ";
    preorder_traversal(root->left);
    preorder_traversal(root-> right);
}

void preorder_traversal_iterative(BTNode *root){
    stack<BTNode *> st;
    vector<int> ans;

    if(root == nullptr) return;
    st.push(root);

    while (!st.empty())
    {
        int size = st.size();

        for(int i = 0; i < size; i++){
            BTNode* current = st.top();
            st.pop();

            ans.push_back(current -> val);
            if(current -> right != nullptr) st.push(current -> right); 
            if(current -> left != nullptr) st.push(current -> left); 
        }
    }
    for(auto x : ans)
        cout << x << " ";   
}

void levelorder_traversal(BTNode *root){
    vector<vector<int>> ans;
    if (root == nullptr) return;
    queue<BTNode *> q;

    q.push(root);

    while(!q.empty()){
        int size = q.size();

        vector<int> level;
        for(int i = 0; i < size; i++){
            BTNode * node = q.front();
            q.pop();

            if(node ->left != nullptr) q.push(node ->left);
            if(node ->right != nullptr) q.push(node ->right);
            level.push_back(node -> val);
        }

        ans.push_back(level);
    }

    for(auto x : ans){
        for(auto y : x){
            cout << y << " ";
        }
    }
}

int maxDepth(BTNode* root){
    if(root == nullptr) return 0;

    int left = maxDepth(root -> left);
    int right = maxDepth(root -> right);

    return 1 + max(left, right);
}

bool isSameTree(BTNode* p, BTNode* q){
    if(p == nullptr && q == nullptr){
        return true;
    }

    if(p == nullptr || q == nullptr) return false;

    if(p -> val != q ->val) return false;

    return isSameTree(p ->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{
    BTNode *root = new BTNode(5);
    BTNode *r_left = new BTNode(4);
    BTNode *r_left1 = new BTNode(2);
    BTNode *r_left_right = new BTNode(3);

    BTNode *r_right = new BTNode(6);
    BTNode *r_right1 = new BTNode(7);

    root->left = r_left;
    r_left->left = r_left1;
    r_left->right = r_left_right;

    root->right = r_right;
    r_right->right = r_right1;

    cout << "Inorder Traversal" << ": ";
    inorder_traversal(root);
    cout << endl;

    cout << "Iterative Inorder Traversal" << ": ";
    inorder_traversal_iterative(root);
    cout << endl;
    cout << endl;


    cout << "Postorder Traversal" << ": ";
    postorder_traversal(root);
    cout << endl;

    cout << "Interactive Postorder Traversal" << ": ";
    postorder_2_stack(root);
    cout << endl;
    cout << endl;

    cout << "Preorder Traversal" << ": ";
    preorder_traversal(root);
    cout << endl;

    cout << "Iterative Preorder Traversal" << ": ";
    preorder_traversal_iterative(root);
    cout << endl;    
    cout << endl;    

    cout << "Level order Traversal" << ": ";
    levelorder_traversal(root);
    cout << endl;            

    return 0;
}