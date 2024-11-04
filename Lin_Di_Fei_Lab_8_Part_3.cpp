/*Di Fei Lin
Lab 8
11/4/24
part 3 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

double getSum(double a, double b, double c);//function declaration

int main(){
    double num1, num2, num3;//identify variables 
    cout<<"Enter three numbers:";//prompt for the user
    cin>>num1>>num2>>num3;//ask for the input of the first, second, third number
    cout<<"The sum of the three numbers:"<<getSum(num1, num2, num3)<<endl;
    //runs getSum using num1, num2, num3

    return 0;//ends the code
}
double getSum(double a, double b, double c){//function given the three inputs
    return a+b+c;//returns the result
}
/*Enter three numbers:2 3 4
The sum of the three numbers:9*/