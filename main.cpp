#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    int input2[100];
    vector <int> input;
    vector <int> lowTides;
    vector <int> highTides;
    cin>>N;
    for (int counter=0;counter<N;counter++)
        cin>>input2[counter];
    for (int counter=0;counter<N;counter++)
        input.push_back(input2[counter]);
    sort(input.begin(),input.end());
    for (int counter=0;counter<N;counter++)
    {
        if (counter>=N/2)
            highTides.push_back(input[counter]);
        else
            lowTides.push_back(input[counter]);
    }
    for (int counter=0;counter<highTides.size();counter++)
        cout<<highTides[counter]<<" ";
    cout<<endl;
    for (int counter=0;counter<lowTides.size();counter++)
        cout<<lowTides[counter]<<" ";
    cout<<endl;
    sort(highTides.begin(),highTides.end());
    sort(lowTides.rbegin(),lowTides.rend());
    for (int counter=0;counter<lowTides.size();counter++)
    {
        cout<<lowTides[counter]<<" ";
        if (!(N%2==1 and counter==lowTides.size()-1))
        cout<<highTides[counter]<<" ";
    }
    return 0;
}
