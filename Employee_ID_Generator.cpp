#include<iostream>
#include<string>
using namespace std;

class Employee
{
    string name;
    int Id;
    static int idcounter;

    public:

    void setdata();
    void getdata();
};

void Employee ::setdata(void)
{
    cout <<"Enter Employee Name: ";
    cin>>name;
    cout<<endl;
    idcounter++;
    Id=idcounter;
}
void Employee ::getdata(void)
{
    cout <<"Employee Name : "<<name<<endl;
    cout <<"Employee ID   : "<<Id<<endl;
    cout <<endl;
}
int Employee ::idcounter=0;

int main()
{
    Employee e1,e2,e3;

    e1.setdata();
    e2.setdata();
    e3.setdata();

    e1.getdata();
    e2.getdata();
    e3.getdata();
}