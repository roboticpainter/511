/*
 * Author: Colby Bates
 * File: test.cpp
 */


#include "cardcatalog.h"

using namespace std;

int main()
{
  CardCatalog cc;

  /*
   * Tests for each function that the library uses.
   * When called as is, the program will return the
   * results vector, for testing individual functionality
   * I have been commenting out the functions I don't 
   * need to test.
   */
  
  //Display the entire CardCatalog Cards Vector
  cc.display();
  //Search By Title using "future" as the search term
  cc.searchTitle("future");
  //Search By Call Number using "Arts" as the search term
  cc.searchCall("Arts"); 
  //Search By Subject using "Science" as the search term
  cc.searchSubject("Science");
  //Search By Other using "1990" as the search term
  cc.searchOther("1990");
}
