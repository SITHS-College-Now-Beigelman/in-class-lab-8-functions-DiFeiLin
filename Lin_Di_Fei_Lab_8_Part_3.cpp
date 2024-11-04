/*Di Fei Lin
Lab 8
11/4/24
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

double getSum(double a, double b, double c);//function given the three inputs

int main(){
    double num1, num2, num3;//identify variables 
    cout<<"Enter three numbers:";//prompt for the user
    cin>>num1>>num2>>num3;//ask for the input of the first, second, third number
    cout<<"The sum of the three numbers:"<<getSum(num1, num2, num3)<<endl;
    //runs getSum using num1, num2, num3

    return 0;//ends the code
}
double getSum(double a, double b, double c){
    return a+b+c;//returns the result
}
