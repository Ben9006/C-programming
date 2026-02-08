#include <iostream>
#include <math.h> //pow()
using namespace std;

//function prototype
float interest(float principle, float rate, int time);
float compound_interest(int P, int t, float rate, int frequency);

int main () {
    float S_I, C_I ,principle, rate, time, frequency;
    cout<<"Enter Principle"<<endl;
    cin>>principle;

    cout<<"Enter rate "<<endl;
    cin>>rate;

    cout<<"Enter time "<<endl;
    cin>>time;

    cout<<"Enter frequency "<<endl;
    cin>>frequency;
    //Function call
    S_I = interest(principle, rate, time);
    C_I = compound_interest(principle, time, rate, frequency);
    cout<<"The simple interest is "<<S_I<<endl;
    cout<<"The compound interest is "<<C_I<<endl;
}

//Function definition
float interest(float principle, float rate, int time) {
    return principle * rate/100 * time;
}

float compound_interest(int P, int t, float rate, int frequency) {
    float C_I = P * pow((1 + (rate/100)/frequency), (frequency * t));
    return C_I;
}