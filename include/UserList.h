#include "User.h"
#ifndef USERLIST_H
#define USERLIST_H
struct Node
{
    User* user;
    Node *next;
    Node()
    {
        next=nullptr;
    }
    Node(User* u)
    {
        (*user)=(*u);
        next=nullptr;
    }
};
class UserList
{
private:
    Node *head;
    Node *tail;
public:
    UserList();
    UserList(User* u);
    void addUser(User* u);
    void printList();
    Node* getHead();
    User* searchUser(string n);
    ~UserList ();


};

#endif // USERLIST_H
