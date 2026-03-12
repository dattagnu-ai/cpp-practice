#include <iostream>
#include <string>
using namespace std;

class calendar
{
    int monthno;
    int year;
    string events[31];

public:
    void showMonths();
    void printCalendar();
    void addEvent();
    void showEvents();
};
void calendar::showMonths()
{
    int choice;int year;
    cout <<"Enter Year"<<endl;
    cin>>year;
    cout << "Enter Month No. " << endl;

    cout << "\n";
    cout << "1=January" << endl;
    cout << "2=February" << endl;
    cout << "3=March" << endl;
    cout << "4=April" << endl;
    cout << "5=May" << endl;
    cout << "6=June" << endl;
    cout << "7=July" << endl;
    cout << "8=August" << endl;
    cout << "9=September" << endl;
    cout << "10=October" << endl;
    cout << "11=November" << endl;
    cout << "12=December" << endl;
    cin >> monthno;
}

void calendar ::printCalendar()
{
    switch (monthno)
    {
    case 1:
        cout << "January" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 31; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        cout << endl
             << "26=Republic day";
        break;
    case 2:
        cout << "February" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 28; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        cout << "\n19=chhatrapati shivaji maharaj jayanti";

        break;
    case 3:
        cout << "March" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 31; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        cout << "\n4=Holi";
        break;

        break;
    case 4:
        cout << "April" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 30; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }

        break;

        break;
    case 5:
        cout << "May" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 31; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        break;

        break;
    case 6:
        cout << "June" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 30; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        break;

        break;
    case 7:
        cout << "July" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 31; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        break;

        break;
    case 8:
        cout << "August" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 31; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        cout << "\n15=Independence day";
        break;

        break;
    case 9:
        cout << "September" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 30; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        break;

        break;
    case 10:
        cout << "October" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 31; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        break;

        break;
    case 11:
        cout << "November" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 30; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        break;

        break;
    case 12:
        cout << "December" << endl;
        cout << "sun  mon  tue  wed  thu  fri  sat " << endl;
        for (int i = 1; i <= 31; i++)
        {
            cout << i << "   ";
            if (i % 7 == 0)
            {

                cout << "\n";
            }
        }
        break;
    default:
    {

        cout << "\nInvalid month number\n";
    }
    }
}
int main()
{
    calendar c1;
    c1.showMonths();
    c1.printCalendar();

}
