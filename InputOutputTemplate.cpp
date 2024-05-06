#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;
};

template<typename Type>
void Print(Type const &data1)
{
    cout << data1 << "\t";
}
void Print(Point const &data)
{
    cout << data.x << "  " << data.y << "\t";
}

template<typename Type>
void Scanf(Type * data)
{
    cin >> *data;
}
void Scanf(Point * po)
{
    cin >> po->x >> po->y;
}
