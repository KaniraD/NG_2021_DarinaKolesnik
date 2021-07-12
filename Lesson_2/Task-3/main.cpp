#include <iostream>

using namespace std;

int main()
{
    int square_size;
    cout << "Square size: ";
    cin >> square_size;
    for (int i = 0; i < square_size; i++){
        for (int i = 1; i < square_size; i++){
            cout << "*";
        }
        cout << "*" << endl;
    }
    system("pause");
    return 0;
}
