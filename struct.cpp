#include <iostream>
using namespace std;

// struct Po
// {
//     int x;
//     int y;
// };

// int main()
// {
//     struct Po p;
//     p.x = 10;
//     p.y = 20;
//     cout <<p.x <<" " << p.y << endl;
// }

struct student
{
    int rollno;
    string name;
    string address;
};

int main()
{
    student s = {101,"XYZ","ABC"};
    cout << s.rollno << " " << s.name;
}