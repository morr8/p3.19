/*
 • Business P3.19
 Calculating the tip when you go to a restaurant is not difficult, but your restaurant wants to suggest a tip according to the service diners receive. Write a program that calculates a tip according to the diner’s satisfaction as follows:
 
 •Ask for the diners’ satisfaction level using these ratings: 1 = Totally satisfied, 2 = Satisfied, 3 = Dissatisfied.
 •If the diner is totally satisfied, calculate a 20 percent tip.
 •If the diner is satisfied, calculate a 15 percent tip.
 •If the diner is dissatisfied, calculate a 10 percent tip.
 •Report the satisfaction level and tip in dollars and cents.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter dinner total: ";
    float dinner;
    cin >> dinner;
    cout << "Enter satisfaction level 1-3: ";
    int rating;
    cin >> rating;
    float tip = 0;
    
    if (rating == 1)
    {
        tip = 0.20;
    }
    else if (rating == 2)
    {
        tip = 0.15;
    }
    else
    {
        tip = 0.10;
    }
    cout << "Satisfaction level: " << rating << "\nDinner total: " << fixed << setprecision(2) << dinner << "\nTip: " << dinner + dinner * tip << endl;
}
