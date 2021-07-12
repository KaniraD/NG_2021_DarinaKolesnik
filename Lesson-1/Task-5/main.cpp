#include <iostream>

using namespace std;

int main()
{
    float first_number, second_number, result;
    int math_action;
    cout << "Enter the first number: ";
    cin >> first_number;
    cout << "Enter the second number: ";
    cin >> second_number;
    cout << "Choose a math action: "; //1-добавить, 2-отнять, 3-умножить, 4-поделить
    cin >> math_action;
    switch (math_action){
        case 1 : result = first_number + second_number;
        break;
        case 2 : result = first_number - second_number;
        break;
        case 3 : result = first_number * second_number;
        break;
        case 4 : result = first_number / second_number;
        break;
    }
    cout << "Result: " << result << endl;
    system("pause");
    return 0;
}
