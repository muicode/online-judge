## 문제
- [1991번 트리 순회](https://www.acmicpc.net/problem/1991)

## C++
```cpp
#include <stdio.h>
#include <stdlib.h>
#include <queue>

class Node
{
	public:
		int data;
		Node *left;
		Node *right;

		Node (char data);
};

class BST
{
	public:
		Node *root;

		BST (char root, char left, char right);
		Node* searchNode(Node *node, char data);
		
		void insertLeft(Node &, char data);
		void insertRight(Node &, char data);
		void preorder(Node &);
		void inorder(Node &);
		void postorder(Node &);
};

Node::Node(char data)
{
	this->data = data;
	this->left = NULL;
	this->right = NULL;
}

BST::BST(char root, char left, char right)
{
	this->root = new Node(root);
	if(left != '.') this->root->left = new Node(left);
	if(right != '.') this->root->right = new Node(right);
}

void BST::insertLeft(Node &node, char data)
{
	node.left = new Node(data);
}

void BST::insertRight(Node &node, char data)
{
	node.right = new Node(data);
}

Node* BST::searchNode(Node *node, char data)
{
	using namespace std;

	queue<Node *> q;
	q.push(node);

	while(!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		if(curr->data == data)
			return curr;

		if(curr->left) q.push(curr->left);
		if(curr->right) q.push(curr->right);
	}

	return nullptr;
}

void BST::preorder(Node &node)
{
	printf("%c", node.data);
	if(node.left) preorder(*node.left);
	if(node.right) preorder(*node.right);
}

void BST::inorder(Node &node)
{
	if(node.left) inorder(*node.left);
	printf("%c", node.data);
	if(node.right) inorder(*node.right);
}

void BST::postorder(Node &node)
{
	if(node.left) postorder(*node.left);
	if(node.right) postorder(*node.right);
	printf("%c", node.data);
}

int main()
{
	int n;
	char root, left, right;
	scanf("%d", &n);
	scanf(" %c %c %c", &root, &left, &right);

	BST sol(root, left, right);

	for(size_t i=0; i<n-1; ++i)
	{
		scanf(" %c %c %c", &root, &left, &right);
		Node *temp = sol.searchNode(sol.root, root);

		if(temp != nullptr)
		{
			if(left != '.') sol.insertLeft(*temp, left);
			if(right != '.') sol.insertRight(*temp, right);
		}
	}

	Node *temp = sol.root;
	sol.preorder(*temp);
	printf("\n");
	sol.inorder(*temp);
	printf("\n");
	sol.postorder(*temp);
	printf("\n");

	return 0;
}
```

## Complexity
- 트리를 순회하는데 걸리는 시간은 O(v + e)이다. 이진 트리의 경우 `n`개의 노드가 있으면 `n-1`개의
선이 있기때문에 이 문제의 최종 시간 복잡도는 O(n + n-1) = <b>O(n)</b> 이다.
- 공간 복잡도는 <b>O(n)</b>.

## Tags
- [트리](https://github.com/myoi-oj/baekjoon-oj#tree)
