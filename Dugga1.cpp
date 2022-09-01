// ============================================================
// TND012: Dugga 1
// Name: Anna Granberg
// Personal number: 0004266326
// LiU-id: anngr950
// ============================================================

/*---------------------------------------------------------------------------------------
 Input: Values for either the sides or angles for a triangle
 Output: Based on the values put in, the program checks if the triangle is valid/invalid.
         Also if it has special properties
 ----------------------------------------------------------------------------------------*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

// Angels and sides of a triangel
    int option = 0;
    int angle_a = 0;
    int angle_b = 0;
    int angle_c = 0;
    int side_a = 0;
    int side_b = 0;
    int side_c = 0;
    
//The users options
    std::cout << std::setw(20) << std::setfill('=') << "="
    << "\n";
    std::cout << "1 = Tringel´s angles\n" << "2 = Tringel´s sides\n";
    std::cout << std::setw(20) << std::setfill('=') << "="
    << "\n";
    std::cout << "Your option? ";
    std::cin >> option;
    
 // We check if the triangle is valid or/and have special properties based on the angels
    if (option == 1) {
        std::cout << "Enter angles: ";
        std::cin >> angle_a >> angle_b >> angle_c;
    
        if ((angle_a + angle_b + angle_c != 180) || (angle_a <= 0 || angle_b <= 0 || angle_c <= 0)) {
            std::cout << "Invalid \n"; }
        else if (angle_a == angle_b && angle_b == angle_c && angle_c == angle_a) {
            std::cout << "equilateral \n";}
        else if (angle_a == angle_b || angle_b == angle_c || angle_c == angle_a) {
            std::cout << "isosceles \n";}
        else {
            std::cout << "valid\n";}
    }

// We check if the triangle is valid or/and have special properties based on the sides
    else if (option == 2) {
        std::cout << "Enter sides: ";
        std::cin >> side_a >> side_b >> side_c;
        
        if (side_a+side_b<side_c || side_a+side_c<side_b || side_c+side_b<side_a
            || side_a<=0 || side_b<=0 || side_c<=0) {
            std::cout << "Invalid \n"; }
        else if (side_a == side_b && side_b == side_c && side_c == side_a) {
            std::cout << "equilateral \n";}
        else if (side_a == side_b || side_b == side_c || side_c == side_a) {
            std::cout << "isosceles \n";}
        else {
            std::cout << "valid\n";}
    }

// If the chooser picked a non valid option
    else
        std::cout << "Invalid option honey, try again\n";
}
