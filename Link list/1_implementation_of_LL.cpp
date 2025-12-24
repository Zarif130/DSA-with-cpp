#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{  
    Node *head;
    Node *tail;
    List()
    {
        head = tail = NULL;
    }
    public:
    void push_fornt(int val){
        Node* newNode=new Node(val);//dynamic
        // Node newNode(val);//static
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode ->next =head;
        }
    }
};
int main()
{

    return 0;
}