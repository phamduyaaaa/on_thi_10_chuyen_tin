// g++ -std=c++17 ans_.cpp -o main
// ./main
#include <iostream>

using namespace std;

int solve(int so_can_check){
	int result = 1; // mac dinh la so nguyen to
	
	if (so_can_check < 2) result = 0; // nho hon 2 thi khong phai
	
	else { // neu lon hon 2
		for(int i=2;i<=so_can_check-1;i++){
			if (so_can_check % i == 0){
				result = 0;
				break;
			}
		}
	}
	return result;
}


int main(){

	int so_can_check; cin >>so_can_check;
	
	int result = 1; // mac dinh la so nguyen to
	
	if (so_can_check < 2) result = 0; // nho hon 2 thi khong phai
	
	else { // neu lon hon 2
		for(int i=2;i<=so_can_check-1;i++){
			if (so_can_check % i == 0){
				result = 0;
				break;
			}
		}
	}
	
	cout<<result<<endl;
	
	return 0;
}
