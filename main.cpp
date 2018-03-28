#include <cstdlib>
#include <iostream>
#include <fstream>
#include "BMI.h"           

//check BMI.cpp BMI.h exist (for avoiding compile error


using namespace std;

int main(){

	float	weight,height;
	string headline;

	ifstream inFile  ( "file.in" , ios::in );
	if ( !inFile ){
		cerr << "failed opening" << endl;
		exit( 1 );
	}

	// check whether the file exists or not

	BMI obj (height , weight );

	// create my class obj without giving initial data ( for some purpose
	// i can in put the data respectively in while loop rather than create 5
	// obj use for the same things
	
	ofstream outFile ("file.out",ios::out);
	outFile<<"BMI value\t\tCategory\n";
	
	while( inFile >> height >> weight && weight!=0 && height != 0 ){

                //use while loop to create data respectively and output the data
	
		obj.setHeight(height);                          
		obj.setWeight(weight);

		//use set&get function to read data 
		
		obj.BMI_calculator();

		// apply member function to compute BMI value and category 

		outFile << obj.BMI_calculator() << "\t\t" 
			<< obj.category() <<endl;

		//outfile>>the data (ie BMI category)

	}

	

	return 0;
}


		
