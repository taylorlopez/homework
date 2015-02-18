#include <iostream>
using namespace std;

int main (void)
{
    int gallons, driven, i=1, average, sum;
    
        cout << "Enter the gallons used (-1 to end):" << endl;
        cin >> gallons;
            while (gallons != -1) {
                cout << "Enter the miles driven:" << endl;
                cin >> driven;
                average = driven/gallons;
                sum += average;
                cout << "The miles per gallon for this tank was:" << average << endl;
                i++;
                cout << "Enter the gallons used (-1 to end):" << endl;
                cin >> gallons;
            }
        cout << "The overall average miles per gallon was:" << average/i << endl;
    cout << endl;

    return 0;
}
