#include<iostream>
using namespace std; 

int main(){
	int t ; cin >> t ; while(t--){
		int n ; cin >> n ; 
		cout << (n&1?"Kosuke\n":"Sakurako\n");
	}
}