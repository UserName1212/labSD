#include "rect.hpp"
Rect::Rect()
{
    left = 0; 
    right = 0; 
    top = 0; 
    bottom = 0; 
}
Rect::Rect(int l, int r, int t, int b)
{
    left = l; 
    right = r;
    top = t; 
    bottom = b; 
}