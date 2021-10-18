/* Programming 2
 21700356 Junsuk Seo hw1_prob3 */


#include <iostream>
#include <cmath>
//declare that I'll use std commands
using namespace std;


//A function that converts Feet to Meter
double FeetToMeter(double val){
    return 0.3048 * val;
}
//A function that calculates Bmi
double CalculateBmi(double weight,double height){
    return weight/pow(height,2);
}

//main program
int main()
{
    double feet_height;
    double weight;
    cout << "Enter your height in feet: ";
    cin >> feet_height; //enter centimeter value
    cout << "Enter your weight in kilogram: ";
    cin >> weight;

    double meter_height = FeetToMeter(feet_height); // convert to feet
    double bmi = CalculateBmi(weight,meter_height);

    cout << "Your height is " << meter_height << " m." << endl; //meter height
    cout << "Your weight is " << weight << " kilogram." << endl; // weight
    cout << "Your BMI is " << bmi << "." << endl; // Bmi status

    //instruction message is determined by bmi status
    if(bmi >=25.0){
        cout << "This is considered overweight." << endl;
    }else if(bmi>=18.5 && bmi <25.0){
        cout << "This is considered normal." << endl;
    }else if(bmi<18.5){
        cout << "This is considered underweight." << endl;
    }else{
        cout << "You have entered wrong input, Retry.";
    }


    return 0;
}
