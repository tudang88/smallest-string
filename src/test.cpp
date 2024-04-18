#include <iostream>
#include <string>
#include <sstream>
#include <functional>
#include "BinaryTree.h"

using namespace std;



// DO NOT MAKE CHANGES TO CAPTUREOUTPUT FUNCTION //
inline string captureOutput(function<void()> func) {
    std::stringstream buffer;
    std::streambuf* sbuf = std::cout.rdbuf();
    cout.rdbuf(buffer.rdbuf());
    func();
    cout.rdbuf(sbuf);
    return buffer.str();
}
static void test() {
  /**
   * test case 1
  */
  {
      cout<<"===============TEST 1 START================="<<endl;
      cout<<"Tree:root = [0,1,2,3,4,3,4]\n";
      cout<<"Expected: dba\n";
      TreeNode *root = new TreeNode(0);
      TreeNode *l10 = new TreeNode(1);
      TreeNode *l11 = new TreeNode(2);
      TreeNode *l20 = new TreeNode(3);
      TreeNode *l21 = new TreeNode(4);
      TreeNode *l22 = new TreeNode(3);
      TreeNode *l23 = new TreeNode(4);
      root->left = l10;
      root->right = l11;
      l10->left = l20;
      l10->right = l21;
      l11->left = l22;
      l11->right = l23;

      // confirm solution
      Solution solution;
      string result = solution.smallestFromLeaf(root);
      cout<<"RESULT:"<< result<<endl;
      cout<< (result == "dba" ? "PASS": "FAIL" )<< endl;
      delete root;
      delete l10;
      delete l11;
      delete l20;
      delete l21;
      delete l22;
      delete l23;
  }

  /**
   * test case 2
  */
  {
      cout<<"===============TEST 2 START================="<<endl;
      cout<<"Tree:root = [25,1,3,1,3,0,2]\n";
      cout<<"Expected: adz\n";
      TreeNode *root = new TreeNode(25);
      TreeNode *l10 = new TreeNode(1);
      TreeNode *l11 = new TreeNode(3);
      TreeNode *l20 = new TreeNode(1);
      TreeNode *l21 = new TreeNode(3);
      TreeNode *l22 = new TreeNode(0);
      TreeNode *l23 = new TreeNode(2);
      root->left = l10;
      root->right = l11;
      l10->left = l20;
      l10->right = l21;
      l11->left = l22;
      l11->right = l23;

      // confirm solution
      Solution solution;
      string result = solution.smallestFromLeaf(root);
      cout<<"RESULT:"<< result<<endl;
      cout<< (result == "adz" ? "PASS": "FAIL" )<< endl;
      delete root;
      delete l10;
      delete l11;
      delete l20;
      delete l21;
      delete l22;
      delete l23;
  }

 /**
   * test case 3
  */
  {
      cout<<"===============TEST 3 START================="<<endl;
      cout<<"Tree:root = [2,2,1,null,1,0,null,0]\n";
      cout<<"Expected: abc\n";
      string expected("abc");
      TreeNode *root = new TreeNode(2);
      TreeNode *l10 = new TreeNode(2);
      TreeNode *l11 = new TreeNode(1);
      // TreeNode *l20 = new TreeNode(1);
      TreeNode *l21 = new TreeNode(1);
      TreeNode *l22 = new TreeNode(0);
      // TreeNode *l23 = new TreeNode(2);
      TreeNode *l30 = new TreeNode(0);

      root->left = l10;
      root->right = l11;
      // l10->left = l20;
      l10->right = l21;
      l11->left = l22;
      l21->left = l30;

      // confirm solution
      Solution solution;
      string result = solution.smallestFromLeaf(root);
      cout<<"RESULT:"<< result<<endl;
      cout<< (result == expected ? "PASS": "FAIL" )<< endl;
      delete root;
      delete l10;
      delete l11;
      // delete l20;
      delete l21;
      delete l22;
      // delete l23;
      delete l30;
  }

  /**
   * test case 4
  */
  {
      cout<<"===============TEST 4 START================="<<endl;
      cout<<"Tree:root = [4,0,1,1]\n";
      cout<<"Expected: bae\n";
      string expected("bae");
      TreeNode *root = new TreeNode(4);
      TreeNode *l10 = new TreeNode(0);
      TreeNode *l11 = new TreeNode(1);
      TreeNode *l20 = new TreeNode(1);
      // TreeNode *l21 = new TreeNode(1);
      // TreeNode *l22 = new TreeNode(0);
      // TreeNode *l23 = new TreeNode(2);
      // TreeNode *l30 = new TreeNode(0);

      root->left = l10;
      root->right = l11;
      l10->left = l20;
      // l10->right = l21;
      // l11->left = l22;
      // l21->left = l30;

      // confirm solution
      Solution solution;
      string result = solution.smallestFromLeaf(root);
      cout<<"RESULT:"<< result<<endl;
      cout<< (result == expected ? "PASS": "FAIL" )<< endl;
      delete root;
      delete l10;
      delete l11;
      delete l20;
      // delete l21;
      // delete l22;
      // delete l23;
      // delete l30;
  }

  /**
   * test case 5
  */
  {
      cout<<"===============TEST 5 START================="<<endl;
      cout<<"Tree:root = [3,9,20,null,null,15,7]\n";
      cout<<"Expected: hud\n";
      string expected("hud");
      TreeNode *root = new TreeNode(3);
      TreeNode *l10 = new TreeNode(9);
      TreeNode *l11 = new TreeNode(20);
      // TreeNode *l20 = new TreeNode(1);
      // TreeNode *l21 = new TreeNode(1);
      TreeNode *l22 = new TreeNode(15);
      TreeNode *l23 = new TreeNode(7);
      // TreeNode *l30 = new TreeNode(0);

      root->left = l10;
      root->right = l11;
      // l10->left = l20;
      // l10->right = l21;
      l11->left = l22;
      l11->left = l23;
      // l21->left = l30;

      // confirm solution
      Solution solution;
      string result = solution.smallestFromLeaf(root);
      cout<<"RESULT:"<< result<<endl;
      cout<< (result == expected ? "PASS": "FAIL" )<< endl;
      delete root;
      delete l10;
      delete l11;
      // delete l20;
      // delete l21;
      delete l22;
      delete l23;
      // delete l30;
  }
}
/**
 * main function
*/
int main(int argc, const char** argv) {
  test();
  return 0;
}


