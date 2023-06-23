#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price)
{
    // implement this function as per specification in books_def.h
    BOOK bookn;
        bookn.ID = ID;
        bookn.shelfNum = shelfNum;
        bookn.price = price;
        return bookn;
}

void printBook(BOOK book1)
{
   // implement this function as per specification in books_def.h
   printf("The given book has:\nID : %d\nShelf Number : %d\nPrice : %f\n", book1.ID, book1.shelfNum, book1.price)
   return;
}