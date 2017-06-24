#include <iostream>
#include <list>
#include <deque>
#include <forward_list>
#include <vector>
#include <string>
#include <stdexcept>
#include <ostream>
#include <fstream>
using namespace std;
void f(int xorg);
class Pro{
   //extern void f(int xorg);
   friend void f(int xorg);
   public:
     Pro(int &args,int &value):begins(args),ends(value){}
   private:
     int begins=0;
     int ends=1;
    class Pro *values;
};
int main(int argc,char **argv[])
{
    list<int> value;
    ofstream os;
    for(auto guest = value.begin(); guest != value.end(); guest++){
       if(os)
          os.close();
        else
        cerr <<"They 're so that not Open files for error!"<<endl;
       *guest = isspace(*guest);
   }
   return 0;
}

void f(int xorg)
{
     if(xorg)
     xorg == 1; 
     else
      xorg++; 
}
