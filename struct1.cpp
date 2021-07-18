#include  <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

// int main()
// {
//     Point p = {10,20};
//     Point *ptr = &p;
//     cout <<ptr -> x <<" ";
//     ptr -> x = 30;
//     cout << p.x;
// }

int main()
{
    Point arr[5];
    for (int i=0;i<5;i++)
    {
        arr[i].x = i;
        arr[i].y = i*10;
    }

    for (int i=0;i<5;i++)
    {
        cout << arr[i].x <<" " <<arr[i].y <<" "<< endl;
    }
}