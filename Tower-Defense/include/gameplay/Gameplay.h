#ifndef __GAMEPLAY__H__
#define __GAMEPLAY__H__

#include "database/Component.h"
#include "util/Singleton.h"

class Gameplay : public Component, public Singleton<Gameplay> {
friend class Singleton<Gameplay>;
private:
    Gameplay();
public:
    void init();
    void update();
};

#endif
