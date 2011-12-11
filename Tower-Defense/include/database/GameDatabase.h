#ifndef __GAMEDATABASE__H__
#define __GAMEDATABASE__H__

#include <list>
#include <cstddef>
#include "util/Singleton.h"

// forward declaration for GameObject
class PhysicPart;
class InputPart;
class GameplayPart;
class GraphicPart;
/* For future versions:
class SoundPart;
class AiPart;
*/

class Database;

class GameObject {
friend class Database;
private:
    int ID; // unique ID within database
public:
    int id(void);
    PhysicPart* physic;
    InputPart* input;
    GameplayPart* gameplay;
    GraphicPart* graphic;
};

class Database : public Singleton<Database> {
friend class Singleton<Database>;
private:
    Database();
    std::list<GameObject> list;
    int id; // used to create unique ids
public:
    void add(GameObject* GameObject);
    GameObject* operator [](int id);
    void remove(int id);
};

#endif
