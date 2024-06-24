//Infinity loop using while.

//Formation of infinite loop at two conditions
 //   1) when updation is not mentioned
 //   2) when condition is not mentioned

//#include<iostream>
//using namespace std;
//int main(){
//	int i=0;
//	while(i<1){
//		cout<<"Biscuit"<<" ";
//		
//	}
//	return 0;
//}

//making the infinite as finite loop using break keyword;

//#include<iostream>
//using namespace std;
//int main(){
//	int i=0;
//	int count=0;
//	while(i<1){
//		cout<<"Biscuit"<<" ";
//		count++;
//		if(count==100){
//			break;
//		}
//		
//	}
//	return 0;
//}


//Infinite loop using for


#include<iostream>
using namespace std;
int main(){
	for(int i=0;;i++){
		cout<<i<<" ";
	}
	
	return 0;
}

//#include<iostream>
//using namespace std;
//int main(){
//	for(int i=0;;i++){
//		if(i<150){
//		
//		cout<<i<<" ";
//	}
//	}
//	
//	return 0;
//}
