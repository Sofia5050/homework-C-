#pragma once
#include "IDrawable.h"

class Circle : public IDrawable {
public:
    void draw() override;
};