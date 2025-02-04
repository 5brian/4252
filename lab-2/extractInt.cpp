#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
/* Use of & signifies Call by Reference. What it means in short is whatever you change for these variables in the function is
 reflected back to the calling function. So, you need not return values */
bool getInt(ifstream&, bool&, int&, string&);
int getFileSize(ifstream&);

int main ()
{
	int intData;
	string junkData;
	bool valueIsGood = false;
	string fileName = "";
	cout << "Enter the input filename: ";
	cin >> fileName;
	cout <<endl;
	
	//Open the file in read mode with the ifstream object fin
	
	//Check if the file opened successfully. If not, exit the program
	
	//Print the size of the file
	cout << "File Size: " << getFileSize(fin); 
	
	while (getInt(fin, valueIsGood, intData, junkData)){
		/* Code here: Check if the value in intData is good i.e. integer. This is done by checking valueIsGood boolean
		If value is good, save the intData in intVals.txt else save the junkData in junkVals.txt
		*/
	}
	// Close the files
	
	cout <<"You can now open intVals.txt and junkVals.txt to see the output!"<<endl;
	return 0;
}

int getFileSize(ifstream& fin){
	int fileSize = 0; //For our case, fileSize will not exceed integer's limit so we do not need long
	//Write the logic to print the file size (in bytes)

	return fileSize;
}

// Function returns False if you cannot continue reading the file i.e. either the EOF or the Bad flag got set
bool getInt(ifstream& fin, bool& goodFlag, int& intData, string& junkData){
	bool canContinue;
	// Code the logic here

	return canContinue;
}



