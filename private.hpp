#include<iostream>
using namespace std;
#include<dept.hpp>
#include<hospital.hpp>

class Private : public hospital
{
    private:
    int set_surgery_avail(){
        surgery_timings.update_slots();
    }

    int set_opd_avail(){
        opd_timings.update_slots();
    }

    
    public:
    dept department_list[100];
    timing surgery_timings;
    timing opd_timings;

    int get_opd_avail(){
        opd_timings.view_slots();
    }

    void get_surgery_avail(){
        surgery_timings.view_slots();
    }

};


