#include "Classes/Category.h"

Category::Category(string Name, QColor color)
{
    this->Name = Name;
    this->color = color;
}

void Category::SetColor(QColor color)
{
    this->color = color;
}

QColor Category::GetColor(void)
{
    return color;
}

void Category::SetName(string Name)
{
    this->Name = Name;
}

string Category::GetName(void)
{
    return Name;
}
