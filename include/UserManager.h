#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <iostream>
#include<fstream>
#include "UserList.h"
#include "User.h"

class UserManager
{
public:
    UserManager();
    void getFileInfo();
    void getFriendInfo();
    UserList* getList();
    User* getUser();
private:
    string myText;
    User* u;
    UserList* users;
};

#endif // USERMANAGER_H
