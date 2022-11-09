#ifndef Cont_HPP
#define Cont_HPP
#include <vector>
#include <string>
class contact
{

private:
public:
    vector<string> phone;
    string email;

    contact()
    {
        email = "";
    }
    // overloading in function
    void add_phone();

    void add_phone(string temp);

    void add_email();

    void get_contact();
};

void contact::add_phone()
{
    cout << "\t\tEnter a to add a phone number, d to delete or enter q to quit: ";
    char swtch;
    cin >> swtch;
    if (swtch == 'a')
    {
        cout << "\t\tEnter phone number to add: ";
        string phn;
        cin >> phn;
        phone.push_back(phn);
        return;
    }
    if (swtch == 'd')
    {
        if (phone.size() == 0)
        {
            cout << "\t\tNo phone number found to delete.";
        }
        else
        {
            phone.pop_back();
        }
    }
}

void contact::add_phone(string temp)
{
    phone.push_back(temp);
}

void contact::add_email()
{
    cout << "\t\tEnter email\n";

    cin >> email;
}

void contact::get_contact()
{
    int n = phone.size();
    if (n == 0)
    {
        cout << "\t\tPhone numbers not added yet";
    }

    else
    {
        for (int index = 0; index < n; index++)
        {
            cout <<"\t\t"<< phone[index] << endl;
        }
    }
    int k = email.size();

    if (k == 0)
    {
        cout << "\t\tEmails not added yet";
    }
    else
    {
        cout <<"\t\t"<< email << endl;
    }
}

#endif