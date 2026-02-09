#include<iostream>
using namespace std;

class TimeConverter
{
    int h, m, s;

public:
    void setSeconds(int totalSeconds)
    {
        h = totalSeconds / 3600;
        m = (totalSeconds % 3600) / 60;
        s = totalSeconds % 60;
    }

    void getTime()
    {
        cout << "HH:MM:SS => " << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
    int totalSeconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    TimeConverter t;
    t.setSeconds(totalSeconds);

    t.getTime();

    return 0;
}
