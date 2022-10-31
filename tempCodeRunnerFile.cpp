
#include "user.hpp"
#include "timing.hpp"
#include "contact.hpp"
#include "dept.hpp"
#include "public.hpp"
#include "primary.hpp"
#include "secondry.hpp"
#include "tertiary.hpp"
using namespace std;
int main()
{
  tertiary A;
  cout<<"Enter no of doctors\n";
  int n;
  cin>>n;
  A.set_avail_doc(n);
}