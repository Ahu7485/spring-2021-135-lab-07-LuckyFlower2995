#include <iostream>
#include <cctype>
#include "indent.h"

using namespace std;

int countChar(string line, char c) {
   int i = 0;
   int counter = 0;
   
   while(line[i]) {
      
      if(line[i] == c) {
         counter++;
      }
      i++;
   }

   return counter;
}

