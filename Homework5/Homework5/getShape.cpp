#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "getShape.h"

Shape* getShape(){
  //get the color of the shape or they can enter done
  cout << "Enter a list of shapes - 'done' to end" << endl;
  cout << "Enter the shape's color (or 'done')..." << endl;
  string color;
  cin >> color;
  if (color == "done")
    return NULL; //null shape pointer

  //get the shape type (circle, square, rectangle)
  cout << "Enter shape type..." << endl;
  string shape;
  cin >> shape;//shape type

  //depending on what shape, prompt for variables ie radius, length, etc
  if (shape == "circle"){
    cout << "Enter the radius..." << endl;
    double radius;
    cin >> radius;
    Circle *cir = new Circle(color, radius);
    return cir;
  }
  if (shape == "square"){
    cout << "Enter the length of a side..." << endl;
    double length;
    cin >> length;
    Square *sq = new Square(color, length);
    return sq;
  }
  if (shape == "rectangle"){
    cout << "Enter the length and width..." << endl;
    double length, width;
    cin >> length >> width;
    Rectangle *rect = new Rectangle(color, length, width);
    return rect;
  }
}