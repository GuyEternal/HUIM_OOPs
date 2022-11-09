#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>
using namespace std;
#include <vector>

class timing
{
public:
    vector<string> time_slots;
    vector<string> day_avail;

    void view_slots();

    void update_slots();
};

void timing::view_slots()
{
    cout << "\t\tThe Time slots are: " << endl;
    for (int i = 0; i < time_slots.size(); i++)
    {
        cout <<"\t\t"<< time_slots[i] << " ";
    }
    cout << endl;
    cout << "\t\tThe available days are: " << endl;
    for (int i = 0; i < day_avail.size(); i++)
    {
        cout <<"\t\t"<< day_avail[i] << " ";
    }
}

void timing::update_slots()
{

    cout << "\t\tu. add available days\n";
    cout << "\t\tq. add time slot\n";
    cout << "\t\ts. stop\n";
    cout << "\t\tEnter : ";
    char u;
    cin >> u;
    if (u == 's')
    {
        return;
    }
    string new_day;
    while (u == 'u')
    {
        cout << "\t\tThe day to be added " << endl;
        cin >> new_day;
        day_avail.push_back(new_day);
        cout << "\t\tSuccessfully updated!\n";

        cout << "\t\tu. add available days\n";
        cout << "\t\tq. add time slot\n";
        cout << "\t\ts. stop\n";
        cout << "\t\tEnter : ";
        cin >> u;
        if (u == 's')
        {
            cout << "\t\tSaving changes\n";
            return;
        }
    }

    string new_slot;
    while (u == 'q')
    {
        cout << "\t\tThe time slot to be added " << endl;
        cin >> new_slot;
        time_slots.push_back(new_slot);
        cout << "\t\tSuccessfully updated!\n";
        cout << "\t\tIf you want to add available day  press u or q to update time slot or s to stop" << endl;
        cout << "\t\tu. add available days\n";
        cout << "\t\tq. add time slot\n";
        cout << "\t\ts. stop\n";
        cout << "\t\tEnter : ";
        cin >> u;
        if (u == 's')
        {
            return;
        }
    }
}

#endif