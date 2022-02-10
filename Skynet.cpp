// Skynet.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Skynet random cordinates finder

#define NUM 0xffffffff

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std; // allows us to creeate the namespace so we do not have to use std everytime

int main(){
    srand(time(0)); // starts the random numbers
    int Locateen = rand() % 64 + 1; // radom numbers between 64
    int Gmax = 64; // sets the largest number to 64
    int gmin = 1; // sets the lowest number to 1
    int pretions = 1; // number of scans  starting at one
    int scloc = rand() % 64 + 1; // random number thorugh 64

    bool enemyspot = false; // allows it to start off at false 
    do
    { // whole function created by using do function
        cout << "\n Sending out " << pretions << " scans \n";

            if(scloc > Locateen) {
                cout << "\n enemy not in grid location " << scloc << " number too large. \n";
                Gmax = scloc;
                scloc = ((Gmax - gmin) / 2) + gmin;
                pretions++;
            }
            else if (scloc < Locateen) {
                cout << "\n enemy not in grid location " << scloc << " number too small. \n";
                gmin = scloc;
                scloc = ((Gmax - gmin) / 2) + gmin;
                pretions++;
            }
            if (scloc == Locateen) {
                cout << "\n enemy was found in grid location " << Locateen << " \n";
                cout << "\n enemy spotted only took " << pretions << " attempts \n";
                enemyspot = true;
            }
    } while (Locateen != scloc); // loop will continue as long as the location doesn't equal scan location

    system("pause");
    return(0);
}
