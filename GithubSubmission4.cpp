// GithubSubmission4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

//leftover constant from testing program before making it functional from command line.
//const string FileName = "ConstitutionOfTheUSA.txt";

//modify main to work on command line
int main(int argc, char* argv[])
{
    //initialize header of file
    cout << left << setw(60) << setfill('*') << "" << endl;
    cout << left << "Determine counts of letters in a File Program by Tom Bonino" << endl;
    cout << left << setw(60) << setfill('*') << "" << endl;
    cout << endl; // spacer

    //check if argument is given from command line
    if (argc > 1)
    {
        //intialize counter variables
        int total = 0;
        int a_total = 0;
        int b_total = 0;
        int c_total = 0;
        int d_total = 0;
        int e_total = 0;
        int i_total = 0;
        int o_total = 0;
        int u_total = 0;

        // assign FileName given from command line
        string FileName = argv[1];

        //output file name
        cout << left << "Analyzing file '" << FileName << "'" << setw(3) << setfill('.') << "" << endl;
        cout << endl; // spacer

        //intialize file input variable
        fstream inFile;

        //intialize character variable to pull each character from file, and increment in a switch
        char c;

        //take in the file
        inFile.open(FileName);

        //check if file opened correctly
        if (inFile)
        {
            //loop through each character in the file
            while (!inFile.eof() && inFile >> c)
            {
                //go here if character is a vowel or b, c or d
                if (c == 'a' || c == 'A' || c == 'b' || c == 'B' || c == 'c' || c == 'C' || c == 'd' || c == 'D' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
                {
                    //switch through the vowels, and increment as appropriate.
                    switch (c)
                    {

                        //lowercase falls through to uppercase to minimize code
                    case 'a':
                    case 'A':
                        ++total;
                        ++a_total;
                        break;

                    case 'b':
                    case 'B':
                        ++total;
                        ++b_total;
                        break;

                    case 'c':
                    case 'C':
                        ++total;
                        ++c_total;
                        break;

                    case 'd':
                    case 'D':
                        ++total;
                        ++d_total;
                        break;

                    case 'e':
                    case 'E':
                        ++total;
                        ++e_total;
                        break;

                    case 'i':
                    case 'I':
                        ++total;
                        ++i_total;
                        break;

                    case 'o':
                    case 'O':
                        ++total;
                        ++o_total;
                        break;

                    case 'u':
                    case 'U':
                        ++total;
                        ++u_total;
                        break;

                        //if we end up in here, something went wrong.
                    default:
                        cout << "Something went wrong." << endl;
                        break;
                    }
                }

                //if character is not a vowel, simply continue reading the file.
                else
                {
                    continue;
                }
            }

            // output result of loop here
            cout << "Number of A's: " << right << setw(45) << setfill('.') << "" << a_total << endl;
            cout << "Number of B's: " << right << setw(45) << setfill('.') << "" << b_total << endl;
            cout << "Number of C's: " << right << setw(45) << setfill('.') << "" << c_total << endl;
            cout << "Number of D's: " << right << setw(45) << setfill('.') << "" << d_total << endl;
            cout << "Number of E's: " << right << setw(45) << setfill('.') << "" << e_total << endl;
            cout << "Number of I's: " << right << setw(45) << setfill('.') << "" << i_total << endl;
            cout << "Number of O's: " << right << setw(45) << setfill('.') << "" << o_total << endl;
            cout << "Number of U's: " << right << setw(45) << setfill('.') << "" << u_total << endl;
            cout << "Total vowel count: " << right << setw(41) << setfill('.') << "" << total << endl;

            //pause to let you view results then close successfully
            system("pause");
            return 0;
        }


        //fail program if file doesn't open correctly
        else
        {
            cout << "Error opening the file.";
            return -1;
        }

    }

    // fail program if insufficient number of arguments provided
    else
    {
        cout << "Insufficient arguments provided." << endl;
        return -1;
    }
}