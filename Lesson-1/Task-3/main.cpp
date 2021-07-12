#include <iostream>

using namespace std;

int main()
{
    int N, M, K; //N- количество орешков, которое нужно белке на зиму,
    //M- количество шишек, K- количество орешек в одной шишке
    cout << "Enter number of nuts for the winter: ";
    cin >> N;
    cout << "Enter how many cones the squirrel has: "; // количество шишек у белки
    cin >> M;
    cout << "Enter how many nuts are in the cone: "; //количество орехов в шишке
    cin >> K;
    if((M*K) < N) {
        cout << "NO" << endl;
    }
        else {
            cout << "OK" << endl;
        }
    system("pause");
    return 0;
}
