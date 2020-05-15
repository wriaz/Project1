#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int addition (int fir_num, int sec_num)
{
    cout << fir_num << " + " << sec_num << " = " << fir_num + sec_num << "\n";
}

int subtraction (int fir_num, int sec_num)
{
    cout << fir_num << " - " << sec_num << " = " << fir_num - sec_num << "\n";
}


int main (int argc, char** argv)
{
    int operation;
    int fir_num;
    int sec_num;
        cout <<"Please choose a number: " << "\n";
        cin >> fir_num;
        cout <<"Please choose another number: " << "\n";
        cin >> sec_num;
        cout <<"What operation would you like to do?" << "\n";
        cout << "1. addition(+)\n";
        cout << "2. subtraction(-)\n";
        cout << "Selection: ";
        cin >> operation;
        switch (operation)
        {
            case 1:
                addition(fir_num, sec_num);
                return 0;
                
            case 2:
                subtraction(fir_num, sec_num);
                return 0;
        }
    return 0;
}
