
struct Node
{
    int value;
    Node *next, *prev;
};

struct List
{
    int identifier;
    Node *head;
    List *next;
};

namespace GlobalDeclarations
{
    int listCounter = 0;
}

namespace DynamicAllocation
{
    Node *onCreateNode(int val)
    {
        Node *temp = new Node;
        temp->value = val;
        temp->prev = temp->next = NULL;

        return temp;
    }

    List *onCreateList()
    {
        List* temp = new List;
        temp->head = NUll;
        temp->identifier = GlobalDeclarations::listCounter++;
        temp->next = NULL;

        return temp;
    }
}
