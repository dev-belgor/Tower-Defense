#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include "gameplay/Gameplay.h"
#include "input/Input.h"
#include "graphic/Graphic.h"
#include "physic/Physic.h"

int main ( int argc, char** argv ) {

    Component* gameplay = &Gameplay::getInstance();
    Component* input = &Input::getInstance();
    Component* graphic = &Graphic::getInstance();
    Component* physic = &Physic::getInstance();

    gameplay->init();
    graphic->init();
    physic->init();
    input->init();

    // TODO: exit function/running variable?!
    while (0) {
        input->update();
        physic->update();
        gameplay->update();
        graphic->update();
    }

    return 0;

}
