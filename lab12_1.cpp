#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    string grade;
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    int i = rand() % 9;
    if(i == 0)
        grade = "A";
    else if(i == 1)
        grade = "B+";
    else if(i == 2)
        grade = "B";
    else if(i == 3)
        grade = "C+";
    else if(i == 4)
        grade = "C";
    else if(i == 5)
        grade = "D+";
    else if(i == 6)
        grade = "D";
    else if(i == 7)
        grade = "F";
    else 
        grade = "W";
    
    cout << "You will get "<< grade <<" in this 261102.";
}

