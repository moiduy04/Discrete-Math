#include <iostream>
#include <cmath>
using namespace::std;

template<class T> class Node {
public:
    Node<T>* left;
    Node<T>* right;
    T data;
    
    Node(T data) {
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
};

template<class T> class BinarySearchTree {
    Node<T>* root;
public:
    BinarySearchTree() {
        root = NULL;
    }
    
    void add(T value) {
        root = add(root, value);
    }
    
    Node<T>* add(Node<T>* r, T value) {
        if(r == NULL) {
            return new Node<T>(value);
        }
        if(value >= r->data) {
            r->right = add(r->right, value);
        } else {
            r->left = add(r->left, value);
        }
        return r;
    }

    int height() {
        return height(root);
    }
    
    int height(Node<T>* r) {
        if(r == NULL || (r->left == NULL && r->right == NULL)) {
            return 0;
        } else {
            int leftHeight = height(r->left);
            int rightHeight = height(r->right);
            return 1 + max(leftHeight, rightHeight);
        }
    }
};

int main() {
    BinarySearchTree<string> tree;
    tree.add("Duy");
    tree.add("Bac");
    tree.add("Trang");
    tree.add("Hoang");
    tree.add("Huong");
    tree.add("Khanh");
    tree.add("Mai");
    tree.add("Anh");
    tree.add("Chung");
    tree.add("Tung");
    tree.add("An");
    cout << "=================================\n";
    cout << "Chi?u cao c?a cây: " << tree.height() << endl;
    
    return 0;
}
