/*You are given two integers A and B (A<=B). Over all possible integer values of C (A<= C <= B), find the minimum value of (C-A)+(B-C).*/

//Sollution//

#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int min=b-a;
    cout<<min;
    return 0;
}
