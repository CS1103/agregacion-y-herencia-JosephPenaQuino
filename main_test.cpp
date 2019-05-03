#include "catch.hpp"
#include "Library.h"
#include "Volume.h"
#include "Book.h"
#include "Magazine.h"
#include <iostream>

SCENARIO("Inheritance and Aggregation in CPP")
{
    GIVEN("Volume: Books and Magazines")
    {
        WHEN("Instance a Book")
        {
            Book * test_book = new Book(1, "Clean Architecture", 1);
            THEN("Show book details")
            {
                test_book->show();
            }
        }
        WHEN("Instance a Magazine")
        {
            Magazine * test_magazine = new Magazine(1, "Forbes", 2);
            THEN("Show magazine details")
            {
                test_magazine->show();
            }
        }
    }
    GIVEN("Library")
    {
        WHEN("Adding many Books and Magazines")
        {
            Library my_library(5, 5);
            for (int i = 1; i <= 10; i+=2)
            {
                Book * book = new Book(i/2 +1, "", i);
                Magazine * magazine = new Magazine(i/2+1, "", i+1);
                my_library.include(book);
                my_library.include(magazine);
            }

            THEN("Show Library details")
            {
                my_library.show_library();
            }
        }
    }
}