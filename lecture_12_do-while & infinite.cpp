// Password checking criteria. using while

#include <iostream>
using namespace std;
int main(){
	int password;
	cout<<"Enter password : ";
	cin>>password;
	
	while(password<999999){
		cout<<"Your password is not matched to given criteria,plzz try again"<<endl;
		cout<<"Enter password : ";
		cin>>password;
	}
	cout<<"Password criteria is matched"<<endl;
	return 0;
}


// Password checking criteria. using do-while

#include<iostream>
using namespace std;
int main()
{
	int password;
	
	do{
		cout<<"Enter Password : ";
		cin>>password;
		if(password<999999){
			cout<<"Your password is not matched to given criteria,plzz try again"<<endl;
		}
	}
	while(password<999999);	
	cout<<"Password criteria is matched"<<endl;
	
}






//Formation of infinite loop at two conditions
 //   1) when updation is not mentioned
 //   2) when condition is not mentioned
 
 
 //Infinity loop using while.

#include<iostream>
using namespace std;
int main(){
	int i=0;
	while(i<1){    			//updation is not mentioned
		cout<<"Biscuit"<<" ";
		
	}
	return 0;
}

//making the infinite as finite loop using break keyword;

#include<iostream>
using namespace std;
int main(){
	int i=0;
	int count=0;
	while(i<1){
		cout<<"Biscuit"<<" ";
		count++;
		if(count==100){
			break;
		}
		
	}
	return 0;
}


//Infinite loop using for


#include<iostream>
using namespace std;           
int main(){
	for(int i=0;;i++){ 			//condition is not mentioned
		cout<<i<<" ";
	}
	
	return 0;
}


// making the infinite as finite by giving condition using if.

#include<iostream>
using namespace std;
int main(){
	for(int i=0;;i++){
		if(i<150){
		
		cout<<i<<" ";
	}
	}
	
	return 0;
}
