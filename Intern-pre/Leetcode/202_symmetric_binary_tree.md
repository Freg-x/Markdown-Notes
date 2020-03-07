### Description

* **Level:** Easy
* **algorithm:** DFS/recurrence
* **requirement:**
* ![](images/101_symmetric_binary.png)



### My final solution

```c++
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)return true;
        else return isSymTree(root->left, root->right);
    }

    bool isSymTree(TreeNode *root1,TreeNode *root2){
       if(root1 == nullptr && root2 == nullptr)return true;
       else if(root1 && root2 && root1->val == root2->val){
           return isSymTree(root1->left, root2->right)&&isSymTree(root1->right, root2->left);
       }
       return false;

    }
};
```



I split it into two parts to apply recurrence algorithm. 

### Best solution

This is not the best solution but a different solution without using recurrence;

A **Queue** is applied to store the nodes that waiting to be compared. Definitely it is more complex.

```C++
  bool isSymmetric(TreeNode* root) {
        deque<TreeNode*> d;
        d.push_back(root);
        d.push_back(root);
        
        while( !d.empty() ) {
            TreeNode* t1 = d.front();
            d.pop_front();
            TreeNode* t2 = d.front();
            d.pop_front();
            
            if( t1 == nullptr && t2 == nullptr) continue; 
            if( t1 == nullptr || t2 == nullptr) return false;
            
            if(t1->val != t2->val) return false;
            
            d.push_back(t1->right);
            d.push_back(t2->left);
            d.push_back(t1->left);
            d.push_back(t2->right);
        }
     
        return true;
    } 
```



### Things i learned

Simple problem and i fininshed it in 5 minutes, the key i did this problem is to remind me of DFS:

DFS can be implemented using recurrence algorithm. The key dfs function will only care about one single node(including node in a binary tree, point on a board,etc) and leave the rest work to next dfs function.



















