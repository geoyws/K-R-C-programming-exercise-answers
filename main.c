#include <stdio.h>
#include "kandrcchapter1answers.h"
#include "kandrcchapter2answers.h"
#include "kandrcchapter3answers.h"
#include "kandrcchapter4answers.h"

int main(){

  char myString[] = "123.25E5";

  double myDouble = 0.0;
  printf("My String: %s\n", myString);

  //myInt = stringtointeger(myString);
  myDouble = stringwithexponenttodouble(myString);
  printf("My Double: %.7f\n", myDouble);

  return 0;
}
