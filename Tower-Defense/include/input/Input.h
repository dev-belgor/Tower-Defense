#ifndef __INPUT__H__
#define __INPUT__H__

#include "database/Component.h"
#include "util/Singleton.h"

class Input : public Component, public Singleton<Input> {
friend class Singleton<Input>;
private:
    Input();
public:
    void init();
    void update();
};

#endif
