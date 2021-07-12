#include <iostream>

using namespace std;

int main()
{
    int stars;
    cout << "Enter the number of stars: ";
    cin >> stars;
    for(int i = 0; i < stars; i++){
        cout << "*";
    }
    cout << endl;
    system("pause");
    return 0;
}
