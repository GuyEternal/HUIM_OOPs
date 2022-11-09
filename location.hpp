#ifndef Location_HPP
#define Location_HPP
#include <bits/stdc++.h>
using namespace std;
class location
{

public:
    string building;
    string pin_code;
    string state;
    string district;
    string city;

    void address_show();

    void update();

    void update(string build, string City, string District, string State, string pin);
};

void location ::address_show()
{
    cout << "\t\tAddress is \n";
    cout <<"\t\t"<< this->state <<endl<< this->district <<endl<< this->city <<endl<< this->building <<endl<< this->pin_code << endl;
    cout << endl;
}

void location ::update()
{
    cout << "\t\tPls enter u to update building, else enter q: ";
    char c;
    cin >> c;
    if (c == 'u')
    {
        string s;
        cout << "\t\tEnter building: ";
        cin >> s;
        this->building = s;
    }

    cout << "\t\tPls enter u to update pin_code, else enter q: ";

    cin >> c;
    if (c == 'u')
    {
        int s;
        cout << "\t\tEnter pin_code: ";
        cin >> s;
        this->pin_code = s;
    }

    cout << "\t\tPls enter u to update state, else enter q: ";

    cin >> c;
    if (c == 'u')
    {
        string s;
        cout << "\t\tEnter state: ";
        cin >> s;
        this->state = s;
    }

    cout << "\t\tPls enter u to update district, else enter q: ";

    cin >> c;
    if (c == 'u')
    {
        string s;
        cout << "\t\tEnter district: ";
        cin >> s;
        this->district = s;
    }

    cout << "\t\tPls enter u to update city, else enter q: ";

    cin >> c;
    if (c == 'u')
    {
        string s;
        cout << "\t\tEnter city: ";
        cin >> s;
        this->city = s;
    }
}

void location ::update(string build, string City, string District, string State, string pin)
{
    this->building = build;
    this->city = City;
    this->district = District;
    this->state = State;
    this->pin_code = pin;
}

#endif