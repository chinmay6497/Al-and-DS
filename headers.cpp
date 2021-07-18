// IOSTREAM stands for standard input output
// IOMAPIN stands for output manipulator setw, setprecission 

# include <iostream>
# include <iomanip>

using namespace std;

int main()
{
    int num=50;
    cout << num << endl;
    cout << setw(50);
    cout << num << endl;

}
