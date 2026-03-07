#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    
    public:
    void setNum(int x)
    {
        a=x;
    }
    friend int sum(A,B);
};


class B
{
    int b;

    public:
    void setNum(int y)
    {
        b=y;
    }
    friend int sum(A,B);
};

int sum(A q,B w)
{
    return q.a+w.b;
}
int main()
{
    A obj1;
    B obj2;

    obj1.setNum(2);
    obj2.setNum(2);

    cout <<"sum = "<<sum(obj1,obj2);
}