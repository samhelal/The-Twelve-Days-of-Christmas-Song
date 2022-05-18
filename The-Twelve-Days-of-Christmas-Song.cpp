/*(“The Twelve Days of Christmas” Song) Write an application that uses iteration and 
switch statements to print the song “The Twelve Days of Christmas.” One switch statement 
should be used to print the day (“first,” “second,” and so on). A separate switch statement
should be used to print the remainder of each verse. Visit the website
en.wikipedia.org/wiki/The_Twelve_Days_ of_Christmas_(song)
for
the lyrics of the song. (c++ how to program)*/

#include <iostream>
using namespace std;

int main()
{

    int day(0);

    cout << " Enter number of day : (-1 to quit) ";
    cin >> day;

    while (day != -1)
    {

        switch (day)
        {
        case 1:
            cout << "\n On the first day of Christmas "
                 << "\n My true love gave to me "
                    "\n A partridge in a pear tree. \n";
            break;

        case 2:
            cout << "\n On the second day of Christmas "
                    "\n My true love gave to me "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree. \n";
            break;

        case 3:
            cout << "\n On the third day of Christmas "
                 << "\n My true love gave to me"
                 << "\n Three French hens"
                    "\n Two turtle doves"
                    "\n And a partridge in a pear tree.\n";
            break;

        case 4:
            cout << "\n On the fourth day of Christmas "
                    "\n My true love gave to me"
                    "\n Four calling birds, "
                    "\n Three French hens, "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree.\n";
            break;

        case 5:
            cout << "\n On the fifth day of Christmas "
                    "\n My true love gave to me "
                    "\n Five golden rings, "
                    "\n Four calling birds, "
                    "\n Three French hens, "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree.\n";
            break;

        case 6:
            cout << "\n On the sixth day of Christmas "
                    "\n My true love gave to me "
                    "\n Six geese a-laying,"
                    "\n Five golden rings, "
                    "\n Four calling birds, "
                    "\n Three French hens, "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree.\n";
            break;

        case 7:
            cout << "\n On the seventh day of Christmas"
                    "\n My true love gave to me"
                    "\n Seven swans a-swimming,"
                    "\n Six geese a-laying,"
                    "\n Five golden rings, "
                    "\n Four calling birds, "
                    "\n Three French hens, "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree.\n";
            break;

        case 8:
            cout << "\n On the eighth day of Christmas "
                    "\n My true love gave to me "
                    "\n Eight maids a-milking, "
                    "\n Seven swans a-swimming, "
                    "\n Six geese a-laying, "
                    "\n Five golden rings, "
                    "\n Four calling birds, "
                    "\n Three French hens, "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree. \n";
            break;

        case 9:
            cout << "\n On the ninth day of Christmas "
                    "\n My true love gave to me "
                    "\n Nine ladies dancing, "
                    "\n Eight maids a-milking,"
                    "\n Seven swans a-swimming,"
                    "\n Six geese a-laying, "
                    "\n Five golden rings, "
                    "\n Four calling birds,"
                    "\n Three French hens,"
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree.\n";
            break;

        case 10:
            cout << "\n On the tenth day of Christmas"
                    "\n My true love gave to me "
                    "\n Ten lords a-leaping, "
                    "\n Nine ladies dancing, "
                    "\n Eight maids a-milking, "
                    "\n Seven swans a-swimming, "
                    "\n Six geese a-laying, "
                    "\n Five golden rings, "
                    "\n Four calling birds, "
                    "\n Three French hens, "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree.\n";
            break;

        case 11:
            cout << "\n On the eleventh day of Christmas "
                    "\n My true love gave to me "
                    "\n Eleven pipers piping, "
                    "\n Ten lords a-leaping, "
                    "\n Nine ladies dancing, "
                    "\n Eight maids a-milking,"
                    "\n Seven swans a-swimming,"
                    "\n Six geese a-laying, "
                    "\n Five golden rings, "
                    "\n Four calling birds, "
                    "\n Three French hens, "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree.\n";
            break;

        case 12:
            cout << "\n On the twelfth day of Christmas "
                    "\n My true love gave to me"
                    "\n Twelve drummers drumming, "
                    "\n Eleven pipers piping, "
                    "\n Ten lords a-leaping, "
                    "\n Nine ladies dancing, "
                    "\n Eight maids a-milking, "
                    "\n Seven swans a-swimming, "
                    "\n Six geese a-laying, "
                    "\n Five golden rings, "
                    "\n Four calling birds,"
                    "\n Three French hens, "
                    "\n Two turtle doves "
                    "\n And a partridge in a pear tree.\n";
            break;

        default:
            cout << "\n Wrong value \n"
                    "\n please Enter number in rang 1 to 12 ";

            break;
        }

        cout << "\n Enter number of day : (-1 to quit) ";
        cin >> day;
    }
}