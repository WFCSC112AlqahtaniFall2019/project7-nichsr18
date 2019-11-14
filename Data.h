//
// Created by Sarah Nicholls on 11/7/19.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H
#include<iostream>
#import<string>
using namespace std;
class Data{
public:

    string songName;
    string artist;
    double danceability;
    double energy;
    friend ostream& operator<<(ostream& os, const Data& d);
    bool operator<(const Data &rhs);
    Data(string n= "", string a="", double d=0.0, double e=0.0);

};

#endif //PROJECT7_DATA_H
