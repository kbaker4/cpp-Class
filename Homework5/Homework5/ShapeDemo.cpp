#include "Shape.h"
#include "getShape.h"

int main(){
  //define array of base Shape pointers
  Shape* shapes[100];
  int i = 0, stop = 0, arrayLength = 0;
  //loop, calling getShape() and store returned shape pointer into next avail ele in the array
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
  cout << "The unsorted list of shapes is:" << endl;
  for (i = 0; i < arrayLength; ++i){
    cout << shapes[i]->toString() << endl;
  }
  //sort the array of Shape pointers by area
  int changed = 1;
  do {
    Shape* tmp;
    if (changed == 1){
      for (i = 0; i < arrayLength - 1; ++i){
        if (shapes[i]->area() > shapes[i + 1]->area()){
          tmp = shapes[i + 1];
          shapes[i + 1] = shapes[i];
          shapes[i] = tmp;
          changed == 1;
        }
        else
          changed = 0;
      }
    }
  } while (changed == 1);

  //loop and print list of shapes again, same as above
  cout << endl << "The sorted list of shapes is:" << endl;
  for (i = 0; i < arrayLength; ++i){
    cout << shapes[i]->toString() << endl;
  }
  //loop and call delete on the Shape pointers to delete the objects
  for (i = 0; i < arrayLength; ++i){
    delete shapes[i];
  }
}