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

    void add_phone()
    {
        cout << "Enter a to add a phone number, or enter q to quit";
        char swtch;
        cin >> swtch;
        if (swtch == 'a')
        {
            cout << "Enter phone number to add: ";
            string phn;
            cin >> phn;
            phone.push_back(phn);
            return;
        }
    }

    void add_phone(string temp)
    {
        phone.push_back(temp);
    }

    void add_email()
    {
        cout << "Enter email\n";

        cin >> email;
    }

    void get_contact()
    {
        int n = phone.size();
        if (n == 0)
        {
            cout << "Phone numbers not added yet";
        }

        else
        {
            for (int index = 0; index < n; index++)
            {
                cout << phone[index] << endl;
            }
        }
        int k = email.size();

        if (k == 0)
        {
            cout << "Emails not added yet";
        }
        else
        {
            cout << email << endl;
        }
    }
};
#endif