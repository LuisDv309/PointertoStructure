// pointerToStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct SPCA {
	string dogName;
	string dogBreed;
	int dogAge;
	float dogHeight;
	//string animal;//cat or dog or camel

	//constructor is used to initialize member variables. It helps when input is not given to the program. Otherwise warning and bugs would occur.
	SPCA(string dn = "Tony", string db = "Dobberman", int da = 12, float dh = 92.5) {
		dogName = dn;
		dogBreed = db;
		dogAge = da;
		dogHeight = dh;
	}

};

//function prototypes
struct SPCA* inputValue(struct SPCA* p);//passing and returning pointer to structure
//struct SPCA inputValue(struct SPCA anim); //passing and returning structure
void outputValue(struct SPCA* p);


int main()
{
	SPCA animal, myAnimal, yourAnimal;
	//int x = 0;// data type, variable name and initial value of x //initalizing x
	//cout << animal.dogHeight+5;
	SPCA* ptr;
	ptr = &animal; //& refers to the memory address to be assigned to ptr
	cout << "\nThe value of SPCA name is " << animal.dogName;
	cout << "\nThe memory address of animal is " << ptr;


	/*int x = 5;
	int* xp;
	xp = &x;
	cout << "\nThe value of x is " << x;
	cout << "\nThe memory address of x is " << xp;

	int y = 5;
	int* yp;
	yp = &y;
	cout << "\nThe value of y is " << y;
	cout << "\nThe memory address of y is " << yp;*/
	//inputValue(animal);//passing structure variable
	inputValue(ptr);//passing pointer to structure
	outputValue(ptr);//passing pointer to structure
}

//function
//struct SPCA inputValue(struct SPCA ani) {
//	cout << "\nInput name of the dog: ";  
//	getline(cin, ani.dogName);
//	cout << "\nInput breed of the dog: ";
//	getline(cin, ani.dogBreed);
//	cout << "\nInput age of the dog: ";
//	cin >> ani.dogAge;
//	cout << "\nInput height of the dog: ";
//	cin >> ani.dogHeight;
//	return(ani);
//}

struct SPCA* inputValue(struct SPCA* p) {
	cout << "\nInput name of the dog: ";
	getline(cin, p->dogName);
	cout << "\nInput breed of the dog: ";
	getline(cin, p->dogBreed);
	cout << "\nInput age of the dog: ";
	cin >> p->dogAge;
	cout << "\nInput height of the dog: ";
	cin >> p->dogHeight;
	return(p);
}
//function to output values recievid from inputvalues functions 
void outputValue(struct SPCA* p) {
	cout << "\nName of the dog: " << p->dogName;
	cout << "\nBreed of the dog: " << p->dogBreed;
	cout << "\nAge of the dog: " << p->dogAge;
	cout << "\nHeight of the dog: " << p->dogHeight;
}