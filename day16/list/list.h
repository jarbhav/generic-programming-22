#ifndef LIST_H
#define LIST_H

class Node
{
    //We have default access privileges
    //i.e. private
    int key_;
    Node* link_;
    Node(int key)
    :key_(key), link_(nullptr)
    {

    }
    friend class list;
    /*
    The above line allows functions inside the list class
    to access members of Node class
    We had to do this because we didn't wanted to reveal Node class
    to users.
    */
};

class list
{
    public:
    list();
    void add(int);
    void disp() const;

    private:
    Node* head_;
};

#endif