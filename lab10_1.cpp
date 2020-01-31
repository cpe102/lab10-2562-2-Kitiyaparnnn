#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

int main()
{
    int x;
    string g;
    cout<<"Press Enter 3 times to reveal your future.";
    for(int i=0;i<3;i++) cin.get();
    srand(time(0));
    x=rand() % 9 + 1;
    switch(x){
        case 1: g="A";
        break;
        case 2: g="B+";
        break;
        case 3: g="B";
        break;
        case 4: g="C+";
        break;
        case 5: g="C";
        break;
        case 6: g="D+";
        break;
        case 7: g="D";
        break;
        case 8: g="F";
        break;
        case 9: g="W";
        break;
    }
    cout<<"You will get "<<g<<" in this 261102.";
}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
