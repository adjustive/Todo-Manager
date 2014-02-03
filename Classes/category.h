#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

using namespace std;

class Category
{
public:
    Category(string Name, int color);
    ~Category();

    void   SetColor(int color);
    int    GetColor(void);
    void   SetName(string Name);
    string GetName(void);

private:
    int color; //evt. im html style implementieren?? 00FF00
    string Name;
};

#endif // CATEGORY_H
