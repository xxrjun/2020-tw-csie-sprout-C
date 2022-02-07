#pragma once

#define MAX_LEN 1000

#include <cstring>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

#include "help.h"

struct Page
{
    std::string image;
    std::string cmd[256];
    char text[MAX_LEN];
};

struct EBook
{
    int MaxResourceId;
    std::vector<Page> page;
    int price;
};
std::string LoadFileContent(std::string path);
bool LoadPage(std::ifstream &fin, EBook &book, int pid);
bool LoadBook(const char *Path, EBook &book);

int *find_position(const char text[], const char pattern[]);
void CleanScreen();
void CleanText(Page &page);
void CleanCmd(Page &page);
void PrintCmd(Page &page);
void PrintText(Page &page, int pid, bool animation = true, int *indices = NULL, int p_len = 0);
void PrintPage(EBook &book, int pid);
bool RunCmd(EBook &book, int &pid, const char cmd[]);
int GetCmd(EBook &book, int &pid);
void FindString(EBook &book, int& pid);
