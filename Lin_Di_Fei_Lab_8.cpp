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
int doubleMultiply(int a, int b){//identifies the functions 
    int product;//integer of the product of the division 
    product = a * b* 2;//the function body 
    return product;//returns the product 
}

double getSum(double a, double b, double c);//function declaration

int main(){
    //p1
    double num;//identify the double
    cin>>num;//ask for the inputs
    cout<<"number raised to the power of 4:"<<pow(num,4)<<endl;//number to the fourth power
    cout<<"square root:"<<sqrt(num)<<endl;//square root of the following number
    cout<<"floor:"<<floor(num);//floor of the number

    //p2
    int num4, num5;//identify the two inputs 
    cout<<"Enter two integers: ";//prompt for users 
    cin>>num4>>num5;//input 
    cout<<"Twice the product of the number is: "<<doubleMultiply(num4, num5)<<endl;
    //the output and returns the value of doubleMultiply

    //p3
    double num1, num2, num3;//identify variables 
    cout<<"Enter three numbers:";//prompt for the user
    cin>>num1>>num2>>num3;//ask for the input of the first, second, third number
    double result = getSum(num1, num2, num3);
    cout<<"The sum of the three numbers:"<<result<<endl;
    //runs getSum using num1, num2, num3
    return 0;
}

/*Enter two integers: 1 2 
Twice the product of the number is: 4
Press any key to continue . . . 

the code takes in two values, finds the product of the values and multipies it by two*/

double getSum(double a, double b, double c){//function given the three inputs
    return a+b+c;//returns the result
}
/*Enter three numbers:2 3 4
The sum of the three numbers:9*/