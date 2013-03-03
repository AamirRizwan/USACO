/*
ID: aamir.r1
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int i,N,year,date,day,days,month;
    int maxdim[12]={31,28,31,30,31,30,31,31,30,31,30,31};// max days in a month
    int freq[7]={0,0,0,0,0,0,0}; // frequency of 13th for each day of the week
    fin>>N;
    N=1900+N-1;
    year=1900;
    month=0;// january
    day=5;//saturday  monday is 0
    days=0 ;// days till next 13th

    while(year<=N)
    {
        year=year+month/11;
        freq[day]++;
        days=maxdim[month];

        if(month==1)//feb
            if((year%4==0&&year%100!=0)||(year%400==0))
                days++;
        day=(days+day)%7;
        month=(month+1)%12;

    }
    fout<<freq[5]<<' '<<freq[6];
    for (int i=0;i<5 ;i++ )
    {
        fout<<' '<<freq[i];
    }
    fout<<endl;
    return 0;
}
