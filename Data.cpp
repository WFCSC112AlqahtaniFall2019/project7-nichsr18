//
// Created by Sarah Nicholls on 11/7/19.
//

#include "Data.h"



bool Data::operator<(const Data &rhs) {
    Data d;
    return d.danceability < rhs.danceability;

}

ostream &operator<<(ostream &os, const Data &d) {
    return os<<d.songName<<" "<<d.artist<<" "<<d.danceability<<" "<<d.energy<<endl;
}

Data::Data(string n, string a, double d, double e) {
    songName=n;
    artist=a;
    danceability=d;
    energy=e;
}



