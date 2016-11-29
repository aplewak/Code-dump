#include <iostream>
#include <math.h>
#include "calc.h"
#include <stack>
#include <string.h>
#define MIN 10
#define MAX 100
#define FIB 22
#define EVEN 8
using namespace std;
//code dump excersizes data strucures/ OO programming practice
//this is a basic program that excersizes basics of OO programming 

class AreaOf{

	protected:
		int x,y;
	public:
		int getX(int w){
			x = w;
		}
		int getY(int h){
			y = h;
		}	
		

};
class thing : public AreaOf {

	public:
		int areaOfThing(){
			return x*y;		
		}

};

int main(){
//basic
stack<int> x;
for(int i =0; i <= 100; i++){	

	x.push(i);
	cout<<"pushed"<< i<< '\n';
}
while(!x.empty()){
	cout<<x.top();
	x.pop();
}

for(int i = 0; i <= 1000; i++){
	if(i%50 == 0)
		cout<<'\n';
	if(i*10 < 1000){
		cout<<" ";
	}
	if(i%2 != 0)
		cout<<"_";
	if(i%12==0){
		cout<<" ";
	}else{
		cout<<".";	
	}
}
//class object creation internal/external/sub class creation as well
 
thing object;
calc c;

object.getX(50);
object.getY(50);

cout<<object.areaOfThing()<<'\n';		
cout<<c.calcFib(FIB)<<'\n';
cout<<c.isEven(EVEN)<<'\n';
cout<<c.sumBetween(MIN,MAX)<<'\n';

return 0;

}


