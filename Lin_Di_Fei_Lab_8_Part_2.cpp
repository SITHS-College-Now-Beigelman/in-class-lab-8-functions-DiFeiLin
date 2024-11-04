/*Di Fei Lin
Lab 8
11/4/24
part 2 
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
int main(){
    int num1, num2;//identify the two inputs 
    cout<<"Enter two integers: ";//prompt for users 
    cin>>num1>>num2;//input 
    cout<<"Twice the product of the number is: "<<doubleMultiply(num1, num2)<<endl;
//the output and returns the value of doubleMultiply
    system("PAUSE");
    return 0;//ends the code 
}
/*Enter two integers: 1 2 
Twice the product of the number is: 4
Press any key to continue . . . 

the code takes in two values, finds the product of the values and multipies it by two*/