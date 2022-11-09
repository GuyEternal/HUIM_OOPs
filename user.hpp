

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
    // static keyword application
    static int total_users;
    // constructor overloading
    user()
    {
    }

    user(string name, string password, string mobile_no, string user_name, string email_id, map<string, string> &credentials_users)
    {
        this->name = name;
        this->password = password;
        this->mobile_no = mobile_no;
        this->user_name = user_name;
        this->email_id = email_id;
        credentials_users[user_name] = password;
        total_users++;
    }

    bool login(string user, string password, map<string, string> &credentials_users);

    void sign_up(map<string, string> &credentials_users, string &login_user_name);

    void user_detail();

    void set_name(string &login_user, map<string, string> &credentials_users);
};
// intialising total users
int user ::total_users = 0;

bool user::login(string user, string password, map<string, string> &credentials_users)
{
    if (credentials_users[user] == password)
    {
        cout << "\t\tYou are logged in\n";
    }
    else
    {
        cout << "\t\tNot a user\n";
    }
    return credentials_users[user] == password;
}
void user::sign_up(map<string, string> &credentials_users, string &login_user_name)
{
    cout << "\t\tEnter name: ";
    cin >> this->name;
    cout << "\t\tEnter User name: ";
    cin >> this->user_name;
    while (credentials_users.count(user_name) == 1)
    {
        cout << "\t\tUser name already taken\n";
        cout << "\t\tEnter unique user name\n";
        cin >> this->user_name;
    }
    login_user_name = this->user_name;
    cout << "\t\tEnter Mobile no: ";
    cin >> this->mobile_no;
    cout << "\t\tEnter email id: ";
    cin >> this->email_id;
    cout << "\t\tEnter password: ";
    cin >> this->password;

    credentials_users[user_name] = password;
    cout << "\t\tYou have signed-up successfully\n";
}

void user::user_detail()
{
    cout << "\t\tUser name :" << this->user_name << endl;
    cout << "\t\tName :" << this->name << endl;
    cout << "\t\tEmail :" << this->email_id << endl;
    cout << "\t\tMobile No :" << this->mobile_no << endl;
}

void user::set_name(string &login_user, map<string, string> &credentials_users)
{
    cout << "\t\tEnter Password to update\n";
    string pass;
    cin >> pass;
    if (!(credentials_users[login_user] == pass))
    {
        "Sorry wrong id and password\n";
    }

    cout << "\t\tEnter name\n";
    cin.ignore();
    getline(cin, this->name);
}