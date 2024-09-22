#include <iostream>

double findThirdAngle(double angle1, double angle2) {
    // Calculate the third angle using the fact that the sum of angles in a triangle is 180
    double angle3 = 180 - (angle1 + angle2);
    return angle3;
}

int main() {
    double angle1, angle2;
    std::cout << "Enter the first angle: ";
    std::cin >> angle1;
    std::cout << "Enter the second angle: ";
    std::cin >> angle2;
    double angle3 = findThirdAngle(angle1, angle2);
    std::cout << "The third angle is: " << angle3 << std::endl;
    return 0;
}