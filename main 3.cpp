#include <iostream>
#include <conio.h>
using namespace std;
//----------------------------
int main() //or void main()
{
	float a, h, S;
	cout << "Input a and h: " << endl;
	cin >> a >> h; //input a variable 
	S = a*h/2;
	cout << " S = " << S << endl;
	getch();
	return 0; /*if void main(), then return 0; we do not write!!!!*/
}
