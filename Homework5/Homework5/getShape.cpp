#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

Shape* getShape(){
  //get the color of the shape or they can enter done
  cout << "Enter a list of shapes - 'done' to end" << endl;
  cout << "Enter the shape's color (or 'done')..." << endl;
  string tmp;
  cin >> tmp;
  if (tmp == "done")
    return; //null shape pointer

  //get the shape type (circle, square, rectangle)
  cout << "Enter shape type..." << endl;
  cin >> tmp;//shape type

  //depending on what shape, prompt for variables ie radius, length, etc
  // if(shape type == "circle"){
      // cout << "Enter the radius..." << endl
      // cin >> circle radius
      // use new to create new Circle(color, radius)
      // return pointer to this object
  // if(shape type == "square")
      // cout << "Enter the length of a side..." << endl;
      // cin >> square length
      // use new to create new Square(color, length)
      // return pointer to this object
  // if(shape type == "rectangle")
      // cout << "Enter the length and width..." << endl;
      // cin >> rectangle length >> rectangle width
      // use new to create new Rectangle(color, length, width)
      // return pointer to this object
}