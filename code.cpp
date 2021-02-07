#include <iostream>
//#include <vector>
using namespace std;
class passenger
{
    void passenger_name()
    {
        char a[30];
        cout<<"Enter the passenger name: ";
        cin>>a[30];
    }
    void address()
    {
        char add;
        cout<<"\nEnter the address:";
        cin>>add;
    }
    void mobile_no()
    {
        int mobile_no;
        cout<<"\nEnter the mobile no.;"
        cin>>mobile_no;
    }
}
int main() {

    cout<<"Press 1 for seat cheacking"<<endl;
    int Press1 = 1;
    cout
    int seat[300];
    passenger p1;
    p1.passenger_name();
    p1.address();
    p1.mobile_no();
    int i,n;
    cin>>n;
    switch(n)
    {
        case 1:
            cout<<"Check seat availability"<<endl;
            for(i=0; i<300; i++)
            {
                if(seat[i] == 0)
                { 
                    cout<<""
                }
    }
}
