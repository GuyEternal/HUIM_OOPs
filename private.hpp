#ifndef PRIVATE_HPP
#define PRIVATE_HPP
#include <bits/stdc++.h>
using namespace std;
#include "dept.hpp"
#include "hospital.hpp"

class Private : public hospital
{

public:
    vector<dept> department_list;
    timing surgery_timings;
    timing opd_timings;
    int set_surgery_avail()
    {
        surgery_timings.update_slots();
        return 0;
    }

    int set_opd_avail()
    {
        opd_timings.update_slots();
        return 0;
    }

    int get_opd_avail()
    {
        opd_timings.view_slots();
        return 0;
    }

    void get_surgery_avail()
    {
        surgery_timings.view_slots();
    }
};

#endif
