#include <iostream>
#include <string>
using namespace std;

int main()
{
    int pass = 5689;
    int num;
    int attempt = 3;

    for (int i = 0; i < 3; i++)

    {
        cout << endl;
        cout << "Enter Password" << endl;
        cin >> num;

        if (pass != num)
        {
            cout << "InCorrect Password " << endl;
            attempt--;
            cout << "Attempt Left " << attempt << endl;
        }

        else

        {

            cout << "Password correct";

            break;
        }
        if (attempt == 0)
        {
            cout << "Access Denied" << endl;
        }
    }
}