#include <iostream>

using namespace std;

int main()
{
    int N, M, K; //N- ���������� �������, ������� ����� ����� �� ����,
    //M- ���������� �����, K- ���������� ������ � ����� �����
    cout << "Enter number of nuts for the winter: ";
    cin >> N;
    cout << "Enter how many cones the squirrel has: "; // ���������� ����� � �����
    cin >> M;
    cout << "Enter how many nuts are in the cone: "; //���������� ������ � �����
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
