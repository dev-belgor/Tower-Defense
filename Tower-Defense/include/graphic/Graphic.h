#ifndef __GRAPHIC__H__
#define __GRAPHIC__H__

#include "database/Component.h"
#include "util/Singleton.h"

class Graphic : public Singleton<Graphic>, public Component {
friend class Singleton<Graphic>;
private:
    Graphic();
public:
    void init();
    void update();
};

#endif
