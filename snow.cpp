#include<iostream> 
#include<Windows.h> 
#include<random>
using namespace std; 
int main(){
	for (int a = 5; a <= 25; a += 5)
		cout << a << ", " ;
	cout << endl;
	for (int b = 100; b >= 88; b -= 2)
		cout << b << ", ";
	cout << endl;
	for (int c = 12; c <= 36; c += 3)
		cout << c << ", ";
	cout << endl;
	for (int d = 300; d <= 1000; d += 100)
		Beep(d, 200); 
	cout << endl;
	for (int e = 1; e <= 10; e++) {
		cout << endl;
		for (int i = 1; i <= 6; i++)
			cout << "*";
	}
	cout << endl;
	for (int f = 1; f <= 5000; f++) {
		cout << "*";
		int num = rand() % 18 + 3;
		for (int i = 1; i <= num; i++)
			cout << " ";
	}


}
