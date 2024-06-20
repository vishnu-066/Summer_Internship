

#include<iostream>
using namespace std;
int main(){
	int i=0;
	while(i<10){
		cout<<i<<" ";
		i++;
	}
}



//--------------------Game pattern---------------------

#include<iostream>
using namespace std;
int main(){
	int input;
	cout<<"Enter input : ";
	
	int i=0;
	while(i<100){
		cin>>input;
		if(input==65){
			cout<<"congrats"<<endl;
			break;
		}
	}
		
		
}
