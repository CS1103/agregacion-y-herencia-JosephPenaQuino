#include "Library.h"

Library::Library(int max_books, int max_magazines) : max_books{max_books}, max_magazines{max_magazines} {}

void Library::show_library()
{
    for (auto& current_volume : volumes)
    {
        current_volume->show();
    }
}

bool Library::include(Volume *new_volume)
{
//    Book *new_book = dynamic_cast<Book*>(new_volume);
//    Magazine *new_magazine = dynamic_cast<Magazine*>(new_volume);
//    if (new_book != nullptr)
//    {
//        volumes.push_back(*new_book);
//        return true;
//    }
//    else if (new_magazine != nullptr)
//    {
//        volumes.push_back(*new_magazine);
//        return true;
//    }
//    return false;
    volumes.push_back(new_volume);
    return true;
}
