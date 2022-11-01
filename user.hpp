

#include "location.hpp"
#include <map>

class user
{
    string name;
    string password;
    string mobile_no;

public:
    string user_name;
    string email_id;

    map<string, string> credentials_users;
    user()
    {
        // sample database which will be increased
        credentials_users["manav"] = "iammanav";
        credentials_users["deep"] = "iamdeep";
        credentials_users["ankit"] = "iamankit";
    }
    bool login(string user, string password)
    {
        return credentials_users[user] == password;
    }
    void sign_up()
    {
        cout << "Enter name\n";
        cin >> this->name;
        cout << "Enter User name\n";
        cin >> this->user_name;
        cout << "Enter email id\n";
        cin >> this->email_id;
        cout << "Enter password\n";
        cin >> this->password;

        credentials_users[user_name] = password;
        cout << "You have signed-up successfully\n";
    }
};