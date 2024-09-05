#include <stdio.h>
#include <math.h>


#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv){
    
    calculateDistance(); 
    calculatePerimeter();
    calculateArea();
    calculateWidth(); 
    calculateHeight();

    return 0;
}



double calculateDistance(){
    double x1, y1, x2, y2;
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1); 

    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf \n", x2, y2);

    //calculation
    double distance = sqrt( pow((x2-x1), 2) + pow((y2-y1), 2) );

    //result
    printf("The distance between the two points is %.2lf \n", distance);
    return distance;
    
}

double calculatePerimeter(){ //in this case a circumferenc of a circle  C = 2 pi R
    double distance = calculateDistance();
    double perimeter = 2 * PI * (distance/2); 
    printf("The perimeter of the city encompassed by your request is %.2lf \n", perimeter);
    return 1.00;
}

double calculateArea(){
    double distance = calculateDistance();
    double area = PI * distance/2 * distance/2;
    printf("The area of the city encompassed by your request is %.2lf  \n", area);
    return 1.0;
    
}

double calculateWidth(){ //same as diamter of a circle?
    double width = calculateDistance();
    printf("The width of the city encompassed by your request is %.2lf \n", width);
    return 1.0;
}


double calculateHeight(){ //same as diamter of a circle?
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is %.2lf \n", height);
    return 1.0;
}
