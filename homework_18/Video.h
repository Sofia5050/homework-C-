#pragma once
#include "IPlayable.h"

class Video : public IPlayable {
public:
    void play() override;
};