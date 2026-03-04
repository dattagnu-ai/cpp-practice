#include <iostream>
using namespace std;

class ATM
{
    int balance =4000;
    
    public:
    void check_balance(void);
    void withdrawal_amount(void);
    void deposit_amount(void);
    void quit(void);
};
void ATM::check_balance(void)
{
    cout <<"Your Balance Is = "<<balance;
    cout<<"\n";
}
void ATM::withdrawal_amount(void)
{
    int withdrawal;
    cout <<"Enter Withdrawal Amount "<<endl;
    cout <<"\n";
    cin>>withdrawal;
    
    if (withdrawal<=0)
    {
        cout<<"Invalid amount! Please enter amount greater than 0"<<endl;
        cout<<"\n";    
    }
    else if(withdrawal>balance)
    {
        cout <<"Insufficient Balance"<<endl;
        cout<<"\n";

    }
    else
    {
        cout <<"Completed";
        cout <<"Your Withdrawl amount is = "<<withdrawal<<endl;
        cout <<"And Now Your Balance is  = "<<(balance = balance-withdrawal)<<endl;
        cout<<"\n";
    }
}
void ATM::deposit_amount(void)
{
    int deposit;
    
    cout <<"Enter Your Deposit Amount "<<endl;
    cin>>deposit;
    if (deposit<=0)
    {
        cout<<"Deposit amount must be greater than 0"<<endl;
        cout<<"\n";
    }
    else
    {
        cout<<"Successful"<<endl;
        cout<<"Your Deposit Amount is = "<<deposit<<endl;
        cout<<"And Now Your Balance is = "<<(balance=balance+deposit)<<endl;
        cout<<"\n";
    }
}
void ATM::quit(void)
{   
     
    cout <<"Thank You For Using ATM"<<endl;
    cout<<"\n";
}
int main()
{
    ATM a;
    int choice;
    
    do
    {
    cout <<"Enter Your Choice "<<endl;
    cout <<"\n";
    cout <<"1.Check Balance\n2.Withdrawl Cash\n3.Deposit Cash\n4.Exit\n";
    cin>>choice;
    
    switch(choice)
    {
        case 1: a.check_balance();
        break;
        case 2: a.withdrawal_amount();
        break;
        case 3: a.deposit_amount();
        break;
        case 4: a.quit();
        break;
        default:
        {
            cout<<"Please Select Right Option ";
        }
    }
  }while(choice!=4);
}