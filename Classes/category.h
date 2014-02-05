#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>
#include <QColor>

using namespace std;

class Category
{
public:
    Category(string Name, QColor color);
    ~Category();

    void   SetColor(QColor color);
    QColor GetColor(void);
    void   SetName(string Name);
    string GetName(void);

private:
    QColor color; //evt. im html style implementieren?? 00FF00
    string Name;
};

#endif // CATEGORY_H
