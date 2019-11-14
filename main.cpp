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
    Queue q;
    SortedLinkedList link;

    cout<<"Reading ../SpotifyCleaned.csv..."<<endl;
    //while loop to read csv file while adding to linked lists
    while(!inFile.eof()){
        string songName;
        string artist;
        string danceabilityTemp;
        string energyTemp;
        double danceability;
        double energy;
        //takes in separate data members
        getline(inFile,songName ,',');
        getline(inFile, artist, ',' );
        getline(inFile,danceabilityTemp,',');
        getline(inFile, energyTemp) ;

        //changes string data into doubles
        danceability=stod(danceabilityTemp);
        energy=stod(energyTemp);
        //adds new data to stack, queue, and the sorted linked list
        s.push_head(Data(songName, artist, danceability, energy));
        q.enqueue_tail(Data(songName, artist, danceability, energy));
        link.insertSorted(Data(songName, artist, danceability, energy));
    }

    cout<<"Writing data in stack inserted at head into stacked.txt"<<endl;
    //output for stack
    bool print=true;
    while(print){
        outFile<<s.print()<<endl;
        print=s.pop_head();
    }

    inFile.close();
    outFile.close();

    cout<<"Writing data in queue inserted at tail into queued.txt"<<endl;
    //output using queued
    outFile.open("../queued");
    print=true;
    while(print){
        outFile<<q.print()<<endl;
        print=q.dequeue_head();
    }
    outFile.close();

    cout<<"Writing data in sorted linked list sorted by danceability into sorted.txt"<<endl;
    //output sorted linked list
    outFile.open("../sorted");
    link.print(outFile);
    outFile.close();

    return 0;
}