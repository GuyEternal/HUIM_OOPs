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
    void get_details()
    {
        cout << "trust name is " << this->trust_name << " ";
    }

    void set_trust_name()
    {
        cout << "Enter the trust name: ";
        cin >> trust_name;
    }
};

#endif