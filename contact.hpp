#include <vector>
#include<string>
class contact
{
    private:
    

    public:
    vector<string> phone;
    vector<string> email;

    void add_phone()
    {
        cout<<"Enter a to add a phone number, or enter q to quit";
        char swtch;
        cin>>swtch;
        if (swtch == 'a')
        {
            cout<<"Enter phone number to add: ";
            string phn;
            cin>>phn;
            phone.push_back(phn);
            return;
        }
        
    }

    void add_phone()
    {
        cout<<"Enter a to add an email, or enter q to quit";
        char swtch;
        cin>>swtch;
        if (swtch == 'a')
        {
            cout<<"Enter phone number to add: ";
            string em;
            cin>>em;
            phone.push_back(em);
            return;
        }

    }

    void get_contact()
    {
        int n = size(phone);
        if (n == 0)
        {
            cout<<"Phone numbers not added yet";
        }
        
        else
        {
            for (int index = 0; index < n; index++)
            {
                cout<<phone[index]<<endl;
            }
        }
        
        n = size(email);
        if (n == 0)
        {
            cout<<"Emails not added yet";
        }
        else
        {
            for (int index = 0; index < n; index++)
            {
                cout<<email[index]<<endl;
            }
        }
    }

};