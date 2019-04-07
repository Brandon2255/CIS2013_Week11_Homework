#include <iostream>
#include <string>
#include "Car.cpp"

using namespace std;

int main(){
	
	string s1 , s2 , s3;
	char playeranswer;
	
	Car toyota;
	
	cout << " Here is your current car and condition. \n";
	

	cout << toyota.getStatus() << endl;
	
//	cout << " Please enter a different make. ";
//	cin >>  s1;
	
//	toyota.setMake(s1);
	
//	cout << toyota.getStatus() << endl;
	
	
	
	do{
		
		cout << " \n \n Select an action: \n";
		cout << " > \t set make (m) \n";
		cout << " > \t set Model (M) \n";		
		cout << " > \t set color (c) \n";
		cout << " > \t turn car on (o) \n";
		cout << " > \t turn car Off (O) \n";
		cout <<  " > \t increase speed (s) \n";
		cout <<  " > \t decrease speed (d) \n";
		cout <<  " > \t turn left (l) or right (r) \n";
		cout << " > \t quit program (q) \n";
		cin >> playeranswer;
		
		switch (playeranswer) {
			case 'm':
				cout << "Enter your make ";
				cin >> s1;
				toyota.setMake(s1);
			
			break;
			case 'M':
				cout << "Enter your model ";
				cin >> s1;
				toyota.setModel(s1);
			
			break;			
			case 'c':
				cout << "Enter your car color ";
				cin >> s1;
				toyota.setColor(s1);
				
				break;
			case 'o':
				// turn car on					
				toyota.turnOnCar(s1);
				
				break;
			case 'O':
				// turn car off					
				toyota.turnOffCar(s1);
				
				break;
			case 's':
				//cout << "Enter your car color ";
				//cin >> s1;
				toyota.increaseSpeed(s1);
				
				break;
			case 'd':
				toyota.decreaseSpeed(s1);
				
				break;
			case 'l':
				toyota.turnLeft(s1);
				
				break;
			case 'r':
				toyota.turnRight(s1);
				
				break;					
			case 'q':
				cout << "Thank you for playing\n";
				playeranswer = 'q';
							
				break;		
			
		}
	
		cout << toyota.getStatus() << endl;
		
	//	cout << "Do you wish to continue ";
	//	cin >> playeranswer;

		
	}while(playeranswer != 'q');
	
	return 0;
}