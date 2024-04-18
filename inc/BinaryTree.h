#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H
#include <iostream>
#include <queue>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/**
 * solution class
*/
class Solution {
public:
    void findPath(TreeNode* currentNode, vector<int>& currentMinPath, vector<int>& minStrPath);
    void findPath_2(TreeNode* currentNode, string& currentSmallest, string& smallestStr);
    string fromVectorReverse(const vector<int>& path);
    bool lexicoSmallestString(vector<int>& first, vector<int>& second);
    string smallestFromLeaf(TreeNode* root);
};
#endif