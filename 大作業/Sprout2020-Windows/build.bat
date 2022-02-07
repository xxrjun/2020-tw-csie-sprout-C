@echo off
set PATH=%cd%\mingw32\bin;%PATH%
del ebook.exe /Q
g++ -std=c++14 -Wall -Wextra -O2 *.cpp -o ebook && ebook
PAUSE