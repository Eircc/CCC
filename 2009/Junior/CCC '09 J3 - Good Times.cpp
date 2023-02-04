#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    int time;
    cin >> time;
    int hours = time / 100;
    int minutes = time - hours * 100;
    cout << time << " in Ottawa" << endl;

    if ((hours + 24 - 3) % 24 > 0) cout << (hours + 24 - 3) % 24;
    if (minutes == 0) cout << "00";
    else cout << minutes;
    cout << " in Victoria" << endl;

    if ((hours + 24 - 2) % 24 > 0) cout << (hours + 24 - 2) % 24;
    if (minutes == 0) cout << "00";
    else cout << minutes;
    cout << " in Edmonton" << endl;

    if ((hours + 24 - 1) % 24 > 0) cout << (hours + 24 - 1) % 24;
    if (minutes == 0) cout << "00";
    else cout << minutes;
    cout << " in Winnipeg" << endl;

    cout << time << " in Toronto" << endl;

    if ((hours + 24 + 1) % 24 > 0) cout << (hours + 24 + 1) % 24;
    if (minutes == 0) cout << "00";
    else cout << minutes;
    cout << " in Halifax" << endl;

    minutes += 30;
    if (minutes >= 60) hours++;
    minutes %= 60;
    hours++;
    hours %= 24;
    if (hours > 0) cout << hours;
    if (minutes == 0) cout << "00";
    else cout << minutes;
    cout << " in St. John's" << endl;   
}
