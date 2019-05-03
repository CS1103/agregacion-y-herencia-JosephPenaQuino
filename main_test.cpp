#include "catch.hpp"
#include "Library.h"
#include "Volume.h"
#include "Book.h"
#include "Magazine.h"

SCENARIO("Inheritance and Aggregation in CPP")
{
    GIVEN("Volume: Books and Magazines")
    {
        WHEN("Instance a Book")
        {
            Book * test_book = new Book(1, "Clean Architecture", 1);
            THEN("")
            {
                test_book->show();
            }
        }
        WHEN("Instance a Magazine")
        {
            Magazine * test_magazine = new Magazine(1, "Forbes", 2);
            THEN("")
            {
                test_magazine->show();
            }
        }
    }
    GIVEN("Library")
    {
        WHEN("")
        {

        }
    }
}