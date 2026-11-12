#include<iostream>
using namespace std;

int converttoSec(int min)
{
    return min * 60;
}

int main()
{
    int mins;

    cout << "Enter minutes: ";
    cin >> mins;

    cout << "Seconds: " << converttoSec(mins);

    return 0;
}
