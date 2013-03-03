/*
ID: aamir.r1
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int NP,NG,money;
    string name,gname,namelist[10];
    // gname - givers name
    fin>>NP;
    map<string,int> M;
    for (int i=0; i<NP ; i++ )
    {
        fin>>name;
        namelist[i]=name;
        M[name]=0;

    }
    for (int i=0; i<NP ; i++ )
    {
        fin>>gname;
        fin>>money;
        fin>>NG;    //cout<<endl<<gname<<':'<<money<<':';
        for (int j=0; j<NG ; j++ )
        {
            fin>>name;
            M[name]+=money/NG;  //cout<<name<<' '<<money/NG<<' ';
        }
        if(NG==0)
            M[gname]+=money;
        else
        {
            M[gname]+=money%NG;
            M[gname]-=money;
        }

    }

    for(int i=0; i<NP; i++)
    {
        fout<<namelist[i]<<' '<<M[namelist[i]]<<endl;

    }
return 0;
}
