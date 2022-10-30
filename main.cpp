#include<iostream>
using namespace std;

//Including all header files needed
#include "hospital.hpp"
#include "location.hpp"
#include "user.hpp"
#include "timing.hpp"
#include "contact.hpp"
#include "dept.hpp"
#include"public.hpp"
#include"primary.hpp"
#include"secondry.hpp"
#include"tertiary.hpp"
int main()
{
    Secondry a;
    a.name = "abc";
     cout<<a.num_doc<<endl;
    a.set_avail_doc(12);
    a.get_details();
    
}