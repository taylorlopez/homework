//Azario Lopez

#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
    int selection; 

    cout << "+--------------------"     <<endl;
    cout << "|1. Using Payroll Program" <<endl;
    cout << "|2. Taking a Quiz"         <<endl;
    cout << "|3. Find Your Letter Grade"<<endl;
    cout << "|4. Nothing"               <<endl;
    cout << "+--------------------"     <<endl;

    cin >> selection;


    switch (selection){
        case 1:
            
            double raise, salary, newsalary;
            
            cout << "Please enter your current salary:" << endl;
        
            cin >> salary;

            if (salary > 0 and salary < 9500){
                raise = 15.2;
                newsalary = salary * raise;
            }
            
            else if (salary > 9500 and salary < 12752){
                raise = 17.6;
                newsalary = salary * raise;
            }
            
            else if (salary > 12752 and salary < 500000){
                raise = 21.9;
                newsalary = salary * raise;
            }
            
           cout << "Your current salary is:" << salary << endl;
           cout << "Your percent raise is:" << raise << endl;
           cout << "You new salary is:" << newsalary << endl; 
            break;
        case 2:
            
            int a;

            cout << "What color is the sky?" << endl;
            
            cout << "+--------------------"  << endl;
            cout << "|1: Green."             << endl;
            cout << "|2: Red."               << endl;
            cout << "|3: Blue."              << endl;
            cout << "|4: Orange."            << endl;
            cout << "+--------------------"  << endl;

            cin  >> a;

            if (a == 1) {
                cout << "Sorry wrong answer!" << endl;
            }
            
            if  (a == 2){ 
                cout << "Sorry wrong answer!" << endl;
            }

            if (a == 3){
                cout << "That's CORRECT!"     << endl;
            }

            if (a == 4) {
                cout << "Sorry wrong answer!" << endl;
            }

            if (a >= 5){ 
                cout << "You entered and invalid number" << endl;
            }
            
            break;
        case 3:
            
            int grade;

            cout << "Please enter in your test score:" << endl;
            cin >> grade;

            if ( grade >= 90 and grade <= 100 ) {
                    cout << "You got an A" << endl;
            }

            if ( grade >= 80 and grade <=  89 ) {
                    cout << "You got a B" << endl;
            }

            if ( grade >= 70 and grade <=  79 ) {
                    cout << "You got a C" << endl;
            }

            if ( grade >= 60 and grade <=  69  ) {
                    cout << "You got a D" << endl;
            }

            if ( grade >= 0 and grade  <=  59  ) {
                    cout << "You got an F" << endl;
            }
            
            break;
        case 4:
            
            cout << "The Program will now close" << endl;
            
            break;

        default:
            cout << "Invalid" << endl;
            break;

    }



    return 0;
}
