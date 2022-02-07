#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

#include "help.h"
#include "ebook.h"

using namespace std;

int *find_position(const char text[], const char pattern[])
{
    static int index[MAX_LEN];
    int i = 0;
    /* TODO */
    /* Find all the matching pattern in text and put their indices in the array*/
    /*const char *loc  = strchr(text, *pattern);
    while(loc != NULL){
        index[i++] = loc - text;
        loc = strchr(loc + 1, *pattern);
    }*/ 
    const char *loc = strstr(text, pattern);
    while(loc != NULL){
        index[i++] = loc - text;
        loc = strstr(loc + 1, pattern);
    }

    return index;
}

bool RunCmd(EBook &book, int &pid, const char cmd[])
{   
    static int temp;
    /*example and template*/
    if (strcmp(cmd, "Search") == 0)
    {
        FindString(book, pid);
        return true;
    }
    else if(strcmp(cmd, "goto 1") == 0){
        PrintPage(book,1);
        pid++;
        return true; 
    }
    else if(strcmp(cmd, "goto 2") == 0){
        PrintPage(book,2);
        pid++;
        return true;        
    }
    else if(strcmp(cmd, "goto 3") == 0){
        PrintPage(book,3);
        PrintPage(book,2);
        pid = 2;
        return true;
    }            
    else if(strcmp(cmd, "goto 4") == 0){
        PrintPage(book,4);
        pid++;
        return true;
    }
    else if (strcmp(cmd, "exit") == 0 ){
        cout << "Thanks for use!" << endl;
        exit(1);
    }
    else if (strcmp(cmd, "Qsave") == 0 ){
        temp = pid;
        cout << "Save Page " << temp << " successfully!\a" << endl;
        return true;
    }
    else if (strcmp(cmd, "Qload") == 0 ){
        cout << "Loading to Page " << temp << " ...\a" << endl;
        usleep(90000);
        PrintPage(book, temp);
        return true;
    }

    /* TODO: handle other commands*/
    /* else if... */
    return false;
}


int main()
{
    EBook book;
    const char *bookname = "meme.txt";
    if (!LoadBook(bookname, book))
    {
        return -1;
    }

    std::cout << "load book " << bookname << "!" << std::endl;
    std::cout << "Press any key to read the book" << std::endl;
    Getch();

    int current = 0;
    PrintPage(book, current);
    while (true)
    {
        if (!GetCmd(book, current))
        {
            std::cerr << "Something went wrong..." << std::endl;
            break;
        }
    }

    return 0;
}
