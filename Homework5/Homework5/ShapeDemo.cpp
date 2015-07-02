#include "Shape.h"
#include "getShape.h"

int main(){
  //define array of base Shape pointers
  Shape* shapes[100];
  int i = 0, stop = 0;
  //loop, calling getShape() and store returned shape pointer into next avail ele in the array
  do{
    shapes[i] = getShape();
    if (shapes[i] = nullptr)
      stop = 1;
    i++;
  } while (stop = 0);//you haven't gotten a null ptr back)
  //loop is complete when null shape pointer is returned from getShape

  //new loop to print list of shapes by calling toString member function on each Shape* pointer in the array
  for (int i = 0; i < 10; ++i){
    cout << shapes[i]->toString() << endl;
  }
  //sort the array of Shape pointers by area
  for (int i = 0; i < 10; ++i){
    Shape* tmp;
    if (shapes[i]->area() > shapes[i + 1]->area()){
      tmp = shapes[i + 1];
      shapes[i + 1] = shapes[i];
      shapes[i] = tmp;
    }
  }
  //loop and print list of shapes again, same as above

  //loop and call delete on the Shape pointers to delete the objects

}