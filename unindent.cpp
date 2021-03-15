#include <iostream>
#include <cctype>
#include "unindent.h"

using namespace std;

string removeLeadingSpaces(string line) {
   string newline;
   int index = 0;
   int x = 0;
   
   while(line[x]) {
      if (isspace(line[x]) and index == 0) {
         newline = newline;
      } else {
         index = 1;
      } 
      if (index == 1) {
         newline = newline + line[x];
      }
      x++;
      
   } 
   
   return newline; 
}
   
