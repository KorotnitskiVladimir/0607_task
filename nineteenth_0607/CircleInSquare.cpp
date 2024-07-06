#include "CircleInSquare.h"

bool CircleInSquare::isFit()
{
    if (radius*2 <= side)
        return true;
    else
        return false;
}
