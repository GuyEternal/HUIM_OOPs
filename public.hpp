#ifndef PUBLIC_HPP
#define PUBLIC_HPP
#include "hospital.hpp"
#include <bits/stdc++.h>
#include "dept.hpp"
#include "timing.hpp"
using namespace std;

class Public : public hospital
{
    string trust_name;

public:
    void get_details()
    {
        cout << "trust name is " << this->trust_name << " ";
    }
};


#endif