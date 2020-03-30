
#include <bits/stdc++.h>
using namespace std;
vector<int> ans;

// Linked list Node structure
struct Node {
    int data;
    struct Node* next;
};


int findCommonNodes(struct Node* head1, struct Node* head2)
{
    // list 1
    struct Node* current1 = head1;
    
    // list 2
    struct Node* current2 = head2;
    
    int count = 0;
    
    unordered_set<int> map;
    
    while (current1 != NULL) {
        
        // insert list data in map
        map.insert(current1->data);
        
        current1 = current1->next;
    }
    
    while (current2 != NULL) {
        
        if (map.find(current2->data) != map.end()) {
            ans.push_back(current2->data);
            count++; }
        
        current2 = current2->next;
    }
    
    return count;
}

/* Helper function that inserts node insert a node at the list head or beginning */
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

/* Helper function that prints the linked list */
void printList(struct Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


int main()
{
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    
    /* Sample linked list 1 creation
     List 1 = 3 -> 4 -> 19 -> 12 -> 6
     */
    
    push(&head1, 3);
    push(&head1, 4);
    push(&head1, 19);
    push(&head1, 12);
    push(&head1, 6);
    
    // List 2 = 15 -> 6 -> 12 -> 343 -> 23 -> 18
    push(&head2, 15);
    push(&head2, 6);
    push(&head2, 12);
    push(&head2, 343);
    push(&head2, 23);
    push(&head2, 18);
    
    cout<<endl;
    cout << "Sample Linked list1: \n";
    printList(head1);
    cout<<endl;
    
    cout << "Sample Linked list2: \n";
    printList(head2);
    cout<<endl;
    
    int count = findCommonNodes(head1, head2);
    
    cout<<"Common elements: ";
    // print common node in both list
    for(int x:ans)
        cout<<x<<" ";
    
    
    cout<<endl;
    cout << "Count of the common nodes in both list is = " << count;
    
    return 0;
}
