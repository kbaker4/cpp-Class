// Kevin Baker
// UMass Lowell
// Professor Smith
// C++ Programming
// 2 JUL 15

#include "Shape.h"
#include "getShape.h"

int main(){
  //define array of base Shape pointers
  Shape* shapes[100];
  int i = 0, stop = 0, arrayLength = 0;
  //loop, calling getShape() and store returned shape pointer into next avail ele in the array
  cout << "Enter a list of shapes - 'done' to end" << endl;
  do{
    shapes[i] = getShape();
    if (shapes[i] == NULL)
      stop = 1;
    i++;
  } while (stop == 0);//you haven't gotten a null ptr back)
  //loop is complete when null shape pointer is returned from getShape

  i = 0, stop = 0;
  do {
    if (shapes[i] != NULL){
      arrayLength++;
      i++;
    }
    else
      stop = 1;
  } while (stop == 0);

  //new loop to print list of shapes by calling toString member function on each Shape* pointer in the array
  cout << "The list of shapes entered..." << endl;
  for (i = 0; i < arrayLength; ++i){
    cout << shapes[i]->toString() << endl;
  }
  //sort the array of Shape pointers by area
  cout << "Sorting shapes in order by area..." << endl;
  for (int x = 0; x < arrayLength; x++){
    for (int y = 0; y < arrayLength - 1; y++){
      if (shapes[y]->area() > shapes[y+1]->area()){
        Shape* tmp = shapes[y+1];
        shapes[y + 1] = shapes[y];
        shapes[y] = tmp;
      }
    }
  }
  cout << "Sorting complete - " + to_string(arrayLength) + " sort passes required." << endl;

  //loop and print list of shapes again, same as above
  cout << endl << "The sorted list of shapes..." << endl;
  for (i = 0; i < arrayLength; ++i){
    cout << shapes[i]->toString() << endl;
  }
  //loop and call delete on the Shape pointers to delete the objects
  for (i = 0; i < arrayLength; ++i){
    delete shapes[i];
  }
}