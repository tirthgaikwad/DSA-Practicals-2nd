#include <iostream>
#include <algorithm>
using namespace std;
struct Node
{
public:
    int data;
    Node *left;
    Node *right;
};
Node *createNewNode(int val)
{
    Node *nn = new Node();
    nn->data = val;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}
Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return createNewNode(val);
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    return root;
}
int longestpath(Node *root)
{
    if (root == NULL)
        return 0;
    int left = longestpath(root->left);
    int right = longestpath(root->right);

    return 1 + max(left, right);
}
void display(Node *root)
{

    if (root == NULL)
        return;

    display(root->left);
    cout << root->data << " ";
    display(root->right);
}
int findmin(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    while (root->left != NULL)

        root = root->left;

    return root->data;
}
bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->data == val)
        return true;
    if (val < root->data)
        return search(root->left, val);
    return search(root->right, val);
}
void mirror(Node *root)
{
    if (root == NULL)
        return;
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

int main()
{
    Node *root = NULL;
    int n, val;
    cout << "no of root to add: ";
    cin >> n;

    cout << "Enter vals ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        root = insert(root, val);
    }
    display(root);
    cout << endl;
    cout << longestpath(root);
    cout << "\n"
         << findmin(root);
    cout << "\nenter value";
    cin >> val;
    cout << search(root, val);
    cout << endl;
    mirror(root);
    cout << endl;
    display(root);
    return 0;
}
