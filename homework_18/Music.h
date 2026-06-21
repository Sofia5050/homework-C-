#pragma once
#include "IPlayable.h"

class Music : public IPlayable {
public:
    void play() override;
};