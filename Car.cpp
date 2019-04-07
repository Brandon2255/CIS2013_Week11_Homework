#include <string>

using namespace std;

class Car {

	private:
	
		string color;
		string make;
		string model;
		int year;
		bool isOn;
		int speed;
	
	public:
	
		Car(){
			setColor("Gray");
			setMake("Toyota");
			setModel("Tundra");
			setYear(year);
			setIsOn(false);
			setSpeed(0);
		}
		
		Car(string c, string m, string t, int s){
			setColor(c);
			setMake(m);
			setModel(t);
			setYear(year);
			setSpeed(s);
		}
		
		int increaseSpeed(string a){
			if(isOn != false){
			speed = speed + 10;
			}
			else{
				cout << "You need to turn the car on\n";
			}
				return speed;
			
		}
		
		int decreaseSpeed(string a){
			if((isOn != false) && (speed > 0)){
			speed = speed - 10;
			}
			else{
				cout << "You cant go any slower\n";
			}
				return speed;
			
		}
		
		bool turnOnCar(string o){
			if((0 == speed) && (isOn == false)){
				isOn = true;
			}
				
				return isOn;
		}
		
		bool turnOffCar(string o){
			if((0 == speed) && (isOn == true)){
				isOn = false;
			}
				
				return isOn;
		}
		
		void turnLeft(string a){
			if(speed > 0){
			cout << "You make a left hand turn\n";
			}
			else{
				cout << "The car has to be moving to make a turn.\n";
			}
		}
		
		void turnRight(string a){
			if(speed > 0){
			cout << "You make a right hand turn\n";
			}
			else{
				cout << "The car has to be moving to make a turn.\n";
			}
		}
		
		string getStatus(){
			
			if(isOn == true){
				cout << "car is running \n";
			}else{
				cout << "car is off \n";
			}
			cout << "and going " << speed << " MPH\n";
			return "Color: " + color + "\n" + "  Make: " + make + "\n" + "  Model: " + model;
		}
		
		string getColor(){ return color; }
		string getMake(){ return make; }
		string getModel(){ return model; }
		int getYear(){ return year; }
		bool getIsOn(){ return isOn; }
		int getSpeed(){ return speed; }
		
		void setColor(string c){ color = c; }
		void setMake(string m){ make = m; }
		void setModel(string t){ model = t; }
		void setIsOn(bool o){isOn = o; }
		void setYear(int a){ year = 2019; }
		void setSpeed(int s){speed = s; }
};



