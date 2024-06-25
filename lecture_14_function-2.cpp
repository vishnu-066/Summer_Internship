// calling an int function in main function

#include<iostream>
using namespace std;
int annual_day(int boys,int girls){
	int boys_costume=1500;   //cost of one boy costume
	int girls_costume=1800;  //cost of one girl costume
	int total=(boys*boys_costume + girls * girls_costume);
	return total;
}
int main(){
	int boys=25;int girls=25;int total;
	
	//Total costume prices for onr group dance contains 25 boys and 25 girls
	cout<<annual_day(boys,girls)<<endl;
	return 0;
}



// calling a void function in main function
#include<iostream>
using namespace std;
void Function_hall(){
	cout<<"Book a Function Hall"<<endl;
}
void Resort(){
	cout<<"Book a Resort"<<endl;
}
int main(){
	int people;
	cout<<"Enter no.of people : ";
	cin>>people;
	if(people>2000){
		Function_hall();
	}
	else{
		Resort();
	}
	return 0;
}





