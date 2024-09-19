//********************************************************
// fracturing.c
// Author: Emily Royce
// Date: 9/20/2024
// Class: COP 3223 Professor Parra
// Purpose: This program is created to find the distance, perimeter, area, width, and height created by the points entered by the user
// Inputs: The user enters the values for x1, y1, x2, and y2.
// Output: The distance, area, perimeter, width and height of the shape formed by the points
//********************************************************


#include <stdio.h>
#include <math.h> 
#define PI 3.14159

//bonus code to house scanf and printf functions to collect input from user
double ask_for_user_input(){
//variables to house input variables
  double x1, x2, y1, y2;

//asks for corrdinates from users
  printf("Enter your value for x1: ");
  scanf("%lf", &x1);  
  printf("\nEnter your value for y1: ");
  scanf("%lf", &y1); 

  printf("\nEnter your value for x2: ");
  scanf("%lf", &x2); 
  printf("\nEnter your value for y2: ");
  scanf("%lf", &y2); 

// shows the cordiates entered by user
  printf("\nPoint #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
  printf("\nPoint #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

  return 0;

}

double calculate_distance() {

      double x1, x2, y1, y2;

    ask_for_user_input ();
   
double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    
    printf("The distance between the two points is: %0.2lf\n", distance);
    
    return distance;
    
}
double calculate_perimeter(){
    double ask_for_user_input ();

    //the area encompassed is a circle whose diameter is the function above
    double perimeter = PI* calculate_distance();

    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 3;
        
}

double calculate_area(){
    
    ask_for_user_input ();

    
    double area = PI*pow((calculate_distance()/2),2);
    
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 3;

}

double calculate_width() {

double width = calculate_distance();

     ask_for_user_input ();
    
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 2;

}
   
double calculate_height(){

    double height= calculate_distance();

    ask_for_user_input ();
    
     printf("The height of the city encompassed by your request is %.2f\n", height);

    return 2;

}


int main(){

     ask_for_user_input();
     calculate_distance();
     calculate_perimeter();
     calculate_area();
     calculate_width();
     calculate_height();
    
  return 1;
}
