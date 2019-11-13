#include <iostream>
#include<fstream>
#include<string>
#include"Queue.h"
#include"Data.h"
#include"Stack.h"
#include"SortedLinkedList.h"
using namespace std;



int main() {

    ifstream inFile;
    ofstream outFile;
    inFile.open("../SpotifyCleaned.csv");
    outFile.open("../stacked.txt");
    if(!inFile.is_open()) {
        cout << "file does not exist";
        return 1;//indicates error
    }

    Stack s;
    //Queue q;

    //while loop to read csv file while adding to linked lists
    while(!inFile.eof()){
        string songName;
        string artist;
        string danceabilityTemp;
        string energyTemp;
        double danceability;
        double energy;
        int i=0;
        getline(inFile,songName ,',');
        getline(inFile, artist, ',' );
        getline(inFile,danceabilityTemp,',');
        getline(inFile, energyTemp) ;

        danceability=stod(danceabilityTemp);
        energy=stod(energyTemp);
        s.push_head(Data(songName, artist, danceability, energy));
       //q.enqueue_tail(Data(songName, artist, danceability, energy));

    }
    //output for stack
    bool print=true;
    while(print){
        outFile<<s.print()<<endl;
        print=s.pop_head();
    }
    cout<<"here";
    inFile.close();
    outFile.close();

    //output using queued
   /* outFile.open("../queued");
    print=true;
    while(print){
        outFile<<q.print()<<endl;
        print=q.dequeue_head();
    }
    outFile.close();
*/
  ;
    //
    return 0;
}