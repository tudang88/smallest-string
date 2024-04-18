#include <iostream>
#include "BinaryTree.h"
using namespace std;

/**
 * convert vector in reverse order to string
 * the original vector comprised of the node value from root -> leaf
 * So this function will create the string from leaf -> root
*/

string Solution::fromVectorReverse(const vector<int> &path)
{
    string result;
    // cout<<"path Size:"<<path.size() << endl;
    for(int i = path.size() -1 ; i >=0; i--) {
        result.append(1,(char)(path[i] + 97));
    }
    return result;
}

/**
 * compare the string base on the vector of node from root -> leaf
*/
bool Solution::lexicoSmallestString(vector<int>& first, vector<int>& second)
{
    if (first.empty()) return false;
    int f_back_index = first.size() - 1;
    int s_back_index = second.size() - 1;
    while (f_back_index >= 0 && s_back_index >= 0) {
        if (first.at(f_back_index) < second.at(s_back_index)) return true;
        if (first.at(f_back_index) > second.at(s_back_index)) return false;
        f_back_index--;
        s_back_index--;
    }

    return first.size() <= second.size();
}

/**
 * find a string path
*/
// vector<int> minStrPath;
void Solution::findPath(TreeNode *currentNode, vector<int>& currentMinPath, vector<int>& minStrPath)
{
    if (currentNode == nullptr) {
        return;
    }
    // pickup value
    currentMinPath.push_back(currentNode->val);
    // go on left
    if (currentNode->left) {
        findPath(currentNode->left, currentMinPath, minStrPath);
    }
    // found a leaf -> update current minStrPaht
    // go on right
    if (currentNode->right) {
        findPath(currentNode->right, currentMinPath, minStrPath);
    }

    // only update on leaf 
    if (currentNode->left == nullptr && currentNode->right == nullptr) {
        cout<< "----------FOUND LEAF---------"<<endl;
        minStrPath = lexicoSmallestString(minStrPath, currentMinPath)? minStrPath: currentMinPath;
    }

    currentMinPath.pop_back();

}
/**
 * You are given the root of a binary tree where 
 * each node has a value in the range [0, 25] representing the letters 'a' to 'z'.
 * Return the lexicographically smallest string 
 * that starts at a leaf of this tree and ends at the root.
 * As a reminder, any shorter prefix of a string is lexicographically smaller.
 * For example, "ab" is lexicographically smaller than "aba".
 * A leaf of a node is a node that has no children.
*/
string Solution::smallestFromLeaf(TreeNode *root)
{
   vector<int> minStrPath;
   vector<int> currentMinStringPath;
   findPath(root,currentMinStringPath, minStrPath);
   return fromVectorReverse(minStrPath);
}
