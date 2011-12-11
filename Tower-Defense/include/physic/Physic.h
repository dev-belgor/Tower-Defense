#ifndef __PHYSIC__H__
#define __PHYSIC__H__

#include "database/Component.h"
#include "util/Singleton.h"

class Physic : public Component, public Singleton<Physic> {
friend class Singleton<Physic>;
private:
    Physic();
public:
    void init();
    void update();
};

#endif
