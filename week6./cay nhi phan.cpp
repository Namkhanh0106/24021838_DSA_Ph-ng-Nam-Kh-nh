#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* taoNode(int x) {
    Node* p = new Node();
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void themNode(Node*& root, int x) {
    if (root == NULL) {
        root = taoNode(x);
        return;
    }
    if (x < root->data) {
        themNode(root->left, x);
    } else if (x > root->data) {
        themNode(root->right, x);
    }
}

void duyetNLR(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        duyetNLR(root->left);
        duyetNLR(root->right);
    }
}

void duyetLNR(Node* root) {
    if (root != NULL) {
        duyetLNR(root->left);
        cout << root->data << " ";
        duyetLNR(root->right);
    }
}

void duyetLRN(Node* root) {
    if (root != NULL) {
        duyetLRN(root->left);
        duyetLRN(root->right);
        cout << root->data << " ";
    }
}

Node* timKiem(Node* root, int x) {
    if (root == NULL || root->data == x) {
        return root;
    }
    if (x < root->data) {
        return timKiem(root->left, x);
    }
    return timKiem(root->right, x);
}

Node* timMin(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

void xoaNode(Node*& root, int x) {
    if (root == NULL) return;
    if (x < root->data) {
        xoaNode(root->left, x);
    } else if (x > root->data) {
        xoaNode(root->right, x);
    } else {
        if (root->left == NULL) {
            Node* temp = root;
            root = root->right;
            delete temp;
        } else if (root->right == NULL) {
            Node* temp = root;
            root = root->left;
            delete temp;
        } else {
            Node* temp = timMin(root->right);
            root->data = temp->data;
            xoaNode(root->right, temp->data);
        }
    }
}

int main() {
    Node* root = NULL;
    int a[] = {50, 30, 70, 20, 40, 60, 80};
    int n = 7;

    for (int i = 0; i < n; i++) {
        themNode(root, a[i]);
    }

    cout << "Duyet NLR: ";
    duyetNLR(root);
    cout << endl;

    cout << "Duyet LNR: ";
    duyetLNR(root);
    cout << endl;

    cout << "Duyet LRN: ";
    duyetLRN(root);
    cout << endl;

    int del = 30;
    xoaNode(root, del);

    cout << "Cay sau khi xoa " << del << " (LNR): ";
    duyetLNR(root);
    cout << endl;

    return 0;
}
