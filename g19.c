/*James is a meticulous traveler who is calculating the total cost of his road trip. James considers factors such as distance traveled, gas consumption, average miles per liter, parking fees, and toll charges. The program takes inputs for miles traveled, gas consumed, average miles per liter, parking fees, and toll charges, and computes the total cost using the formula:







The result is then displayed with four two-decimal places. The program utilizes arithmetic operators for the calculations.

Input format :
The first line consists of the total number of miles traveled per day as an integer.

The second line consists of the cost of gas per liter as an integer.

The third line consists of the average miles per liter of gas as a positive double-point number.

The fourth line consists of the parking cost as an integer.

The last line consists of the toll cost as an integer.

Output format :
The output displays a double value representing the total cost calculated based on the given formula with rounded-off to decimal places.*/



#include <stdio.h>
#include <math.h>
int main() {
    int miles,gas,parking,tolls;
    double average_miles;
    scanf("%d%d%lf%d%d",&miles,&gas,&average_miles,&parking,&tolls);
    double res = (miles/average_miles)*gas+parking+tolls;             //1 50 5.0 10 50 
    printf("%.2lf",res);
    return 0;
}
