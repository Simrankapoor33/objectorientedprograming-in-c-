#include<iostream>
using namespace std;

class area
{
    public:
          int breath;
          int length;
          int area;
          void getdata(){
            cout<<"enter the breath of rectangle";
            cin>>breath;
            cout<<"enter the length of rectangle";
            cin>>length;
            area = length*breath;
          }
          void disply(){
            cout<<"area of rectangle is"<<area;
          }
};
int main()
{
    area a;
    a.getdata();
    a.disply();
    return 0;

}