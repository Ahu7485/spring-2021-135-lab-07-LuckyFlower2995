#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "unindent.h"
#include "indent.h"

TEST_CASE ("Removing indentation: ") {
   CHECK(removeLeadingSpaces("     hello") == ("hello")); 
   CHECK(removeLeadingSpaces("  Hello, World;") == ("Hello, World;"));
   CHECK(removeLeadingSpaces("   ;hello") == (";hello"));
   CHECK(removeLeadingSpaces("     2 chocolates") == ("2 chocolates"));
   CHECK(removeLeadingSpaces(" hello    world") == ("hello    world"));
}

TEST_CASE ("Counting blocks ") {
   CHECK(countChar("Hello, World", 'o') == 2);
   CHECK(countChar("int main() {", '{') == 1);
   CHECK(countChar("return 0;", ';') == 1);
}
