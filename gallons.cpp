#include <iostream>
using namespace std;

int main (void)
{
    int driven, i=1, sum, account;
    double gallons, average;
    
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

    
    double total, begin, balance, charges, credit, limit;

    cout << "Enter account number (-1 to end):" << " ";
    cin >> account;
        while (account != -1){
            cout << "Enter beginning balance:" << " ";
            cin >> begin;
            cout << "Enter total charges:" << " ";
            cin >> charges;
            cout << "Enter total credit:" << " ";
            cin >> credit;
            cout << "Enter credit limit:" << " ";
            cin >> limit;
                cout << "Account:" << " " << account << endl;
                cout << "Credit limit:" << " " << limit << endl;
                balance = begin + charges - credit;
                cout << "Balance:" << balance << endl;
                if (balance > limit)
                    cout << "Credit Limit Exceeded" << endl;
    cout << "Enter account number (-1 to end):" << " ";
    cin >> account;
            }
            cout << endl;
                      
    int beg = 0, mid = 0, end = 0, 
    

    cout << "Enter in total (-1 to end):" << " " << endl;
    cin >> total;
        while (total != -1){
            if (total >= 0 and total <= 200)
                beg++;
            else if (total >= 200.01 and total <= 800)
                mid++;
            else if (total >= 800.01)
                end++;
            cout << "Enter in total (-1 to end)" << endl;
            cin >> total;
        }
        cout << "$0.00 - $200.00" << beg << endl;
        cout << "$200.01 - 800.00" << mid << endl;
        cout << "800.01 or more" << end << endl;
        cout << endl;



    return 0;
}
