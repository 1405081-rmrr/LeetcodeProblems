#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <stdlib.h>
#include<stdio.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	void insert(Node** root, int item)
{
	Node* temp = new Node();
	Node* ptr;
	temp->data = item;
	temp->next = NULL;

	if (*root == NULL)
		*root = temp;
	else {
		ptr = *root;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
}

void display(Node* root)
{
	while (root != NULL) {
		cout << root->data << " ";
		root = root->next;
	}
	cout<<endl;
}

Node *arrayToList(int *arr, int n)
{
	Node *root = NULL;
	for (int i = 0; i < n; i++)
		insert(&root, arr[i]);
return root;
}
    int getDecimalValue(Node* head) {
    int i=0;
       vector<int> result;
       while(head!=NULL)
       {
            result.push_back(head->data);
            head=head->next;
       }
       cout<< "Size is "<<result.size()<<endl;
       cout<<"The elements are "<<endl;
     for (auto i = result.begin(); i != result.end(); ++i)
        cout << *i << " ";

        cout<<endl;
        int _size=result.size();
        int sum=0;
        int iteration=1;
    for(auto i=result.begin();i!=result.end();i++)
    {
        int power=pow(2,_size-iteration);
        sum+=(*i)*power;
        iteration++;
    }
    return sum;

    }

};
int main()
{
	int arr[] = { 1,0,0,1,0,0,1,1,1,0,0,0,0,0,0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Node *node=new Node();
	Node *root;
	root=node->arrayToList(arr,n);
	node->display(root);
    int sum=node->getDecimalValue(root);
    cout<<sum<<endl;
	///Node* root = arrayToList(arr, n);
	///display(root);
	return 0;
}
