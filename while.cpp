
#include <iostream>
using namespace std;

int main ()
{
	
	int even=12, square, total=0;
		while (even < 111){
			square=even*even;
			even=even+2;
			total += square;
		}

		cout << "The sum of the even squares from 11 to 111 is:" << total << endl;

	
		
	int a=10, product, c=0;
		
		while (a <= 52){
			product = 5 * a;
			a = a++;
			c = c++;

			if (c < 6)
				cout << product << " ";
			else
			{
				cout << product << endl;
				c=0;
			}
			
		}
		cout << endl;
		
	int squares, m = 50;
		
		while (m > 0){

			squares = m*m;
				m = m--;
			c = c++;

			if (c < 10)
				cout << squares << " ";
			else
			{
				cout << squares << endl;
				c=0;
			}
		}
		cout << endl;
   
    int sum, score, count, i=1, min=0, max=0;
        
        cout << "How many scores do you want to enter?" << endl;
        cin >> count;
        cout << "Please enter score:" << endl;
        cin >> score;
            while (i < count) {
                cout << "Enter a score" << endl;
                cin >> score;
                    if (score > max)
                        max = score;
                    if (score < min)
                        min = score;
                sum += score;
                i++;
                cout << endl;
            }
                cout << "The average score is:" << sum/i << endl;
                cout << "The minimum score is:" << min << endl;
                cout << "The maximum score is:" << max << endl;

            cout << endl;


		return 0;
}


