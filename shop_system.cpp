#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    float itemPrie[100];
    int counter;

    public:

    void initcounter(void);
    void setPrice(void);
    void display(void);
};

void shop ::initcounter(void)
{
    counter=0;
}

void shop ::setPrice(void)
{
    cout <<"Enter ID  NO.  "<<counter+1<<" = ";
    cin>>itemId[counter];

    cout <<"Enter price      = ";
    cin>>itemPrie[counter];

    counter++;
    cout <<"\n-----------------------\n";
}

void shop ::display(void)
{
    for(int i=0;i<counter;i++)
    {
       cout <<"ID    = " <<itemId[i]<<endl;
       cout <<"Price = "<<itemPrie[i]<<endl;
       cout <<"\n========================\n";
       cout<<endl;
    }
}

int main()
{
    shop s;
    
    s.initcounter();
    
    for(int i=0;i<5;i++)
    {
        s.setPrice();
    }
    
    s.display();
    
}