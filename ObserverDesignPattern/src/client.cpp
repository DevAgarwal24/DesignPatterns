#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class ISubscriber {
public:
    virtual void notify(string msg) = 0;
};

class User : public ISubscriber {
public:
    User (int userId) : userId{userId} {}
    void notify(string msg) {
        cout << "User " << userId << ": " << msg << endl;
    }
private:
    int userId;
};

class Group {
public:
    void subscribe(ISubscriber *sub) {
        users.push_back(sub);
    }

    void unsubscribe(ISubscriber *sub) {
        users.remove(sub);
    }

    void notify(string msg) {
        for (auto user : users) {
            user->notify(msg);
        }
    }
private:
    list<ISubscriber *> users;
};

int main()
{
    Group *group = new Group;

    User *user1 = new User(1);
    User *user2 = new User(2);
    User *user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("new message");

    group->unsubscribe(user1);

    group->notify("new message 2");

    return 0;
}