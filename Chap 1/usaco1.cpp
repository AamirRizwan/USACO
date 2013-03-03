/*
ID: aamir.r1
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    int i,group,commet;
    string a,b;
    fin>>a;
    fin>>b;

    group=commet=1;
    i=0;
    while(i<a.size())
    {
        group*=(a[i]-64);
        i++;
    }
    i=0;
    while(i<b.size())
    {
        commet*=(b[i]-64);
        i++;
    }

    if(group%47==commet%47)
        fout<<"GO\n";
    else
        fout<<"STAY\n";

    return 0;
}
