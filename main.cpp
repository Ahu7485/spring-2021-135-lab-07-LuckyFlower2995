#include <iostream>
#include <vector>
#include "unindent.h"
#include "indent.h"

using namespace std;
int main () {
   string line;
   vector <string> array;
   vector <string> array2;
   int stop = 0;
   int counter = 0;
   int count = 0;
   int size = 0;
   string newstring;
   string leadspace;
   
   
   while(getline(cin, line)) {
      size = size + 1;
      leadspace = removeLeadingSpaces(line);
      array.push_back(leadspace);
      
      if (countChar(leadspace, '}') != 0) {
         count = count - 1;
      }
      if (count != 0) {
         for (int x = 1; x <= count; x++) {
            newstring = '\t' + newstring;
         }
         
      }
      newstring = newstring + leadspace;
      array2.push_back(newstring);
      
      if (countChar(leadspace, '{') != 0) {
         count = count + 1;
      }
      
      newstring = "";
   
   }
   
   
   cout << "Remove leading spaces: " << endl;
   for (int x = 0; x < size; x++) {
      cout << array[x] << endl;
   }
   
   cout << "------------------------------------------" << endl;
   
   cout << "Counting blocks and adding indentation: " << endl;
   for (int x = 0; x < size; x++) {
      cout << array2[x] << endl;
   }
   
   return 0;
   
}

