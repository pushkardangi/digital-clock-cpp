#include <iostream>
#include <windows.h>
using namespace std;

void check_inputs(int *, int *, int *);

int main()
{
    int hour, min, sec;
    cout << "\n:: Set time ::\n\n";
    cout << "Enter hours : ";
    cin >> hour;
    cout << "Enter minutes : ";
    cin >> min;
    cout << "Enter seconds : ";
    cin >> sec;

    system("cls");

    check_inputs(&hour, &min, &sec);

    while (1)
    {
        system("cls");

        cout << "Time : " << hour << ":" << min << ":" << sec << "\n";

        Sleep(1000);

        sec++;
        if (sec > 59)
        {
            sec = 0;
            min++;
        }
        if (min > 59)
        {
            min = 0;
            hour++;
        }
        if (hour > 23)
        {
            hour = 0;
        }
    }

    return 0;
}

void check_inputs(int *hour, int *min, int *sec)
{
    int hours = *hour;
    int minutes = *min;
    int seconds = *sec;

    while (hours < 0 || hours > 23)
    {
        cout << "\nIncorrect Input !!\nYou entered : Hours = " << hours << "\n\n";
        cout << "Enter hours again : ";
        cin >> hours;
        system("cls");
    }

    while (minutes < 0 || minutes > 59)
    {
        cout << "\nIncorrect Input !!\nYou entered : Minutes = " << minutes << "\n\n";
        cout << "Enter minutes again : ";
        cin >> minutes;
        system("cls");
    }

    while (seconds < 0 || seconds > 59)
    {
        cout << "\nIncorrect Input !!\nYou entered : Seconds = " << seconds << "\n\n";
        cout << "Enter seconds again : ";
        cin >> seconds;
        system("cls");
    }

    // updated to correct inputs
    *hour = hours;
    *min = minutes;
    *sec = seconds;

    return;
}