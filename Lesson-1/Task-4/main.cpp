#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout << "Enter your salary: ";
    cin >> salary;
    if(salary < 1000000){
        if (salary < 1000){
        cout << "Rabotai bolshe!";
        }
        if (salary>999){
            cout << "Kruto";
        }
    }
    if(salary > 999999){
        cout<< "Da ti millioner";
    }
    cout << ", no ti molodec!"<<endl;
    system("pause");
    return 0;
}
