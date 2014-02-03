#include "category.h"

Category::Category(string Name, int color)
{
    this->Name = Name;
    this->color = color;
}

void Category::SetColor(int color)
{
    this->color = color;
}

int Category::GetColor(void)
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
