#ifndef PUBLIC_HPP
#define PUBLIC_HPP
#include "hospital.hpp"
#include <bits/stdc++.h>
#include "dept.hpp"
#include "timing.hpp"
using namespace std;

class Public : public hospital
{
public:
    string trust_name;

public:
    void get_trust_name();

    void set_trust_name();

    void get_details();
};

void Public ::get_trust_name()
{
    cout << "\t\ttrust name is " <<endl<<"\t\t"<< this->trust_name << " ";
}

void Public ::set_trust_name()
{
    if (is_admin() == true)
    {
        cout << "\t\tEnter the trust name: ";
        cin >> trust_name;
    }
}

void Public :: get_details()
{
    // This function is for overriding the pure virtual function used in hospital class
    
    get_trust_name();
}
#endif