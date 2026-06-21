#pragma once
#include "IDrawable.h"

class Rectangle : public IDrawable {
public:
    void draw() override;
};