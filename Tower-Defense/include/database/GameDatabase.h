#ifndef __GAMEDATABASE__H__
#define __GAMEDATABASE__H__

#include <list>
#include <cstddef>
#include "util/Singleton.h"
#include "database/Map.h"

// forward declaration for GameObject
class PhysicPart;
class InputPart;
class GameplayPart;
class GraphicPart;
/* For future versions:
class SoundPart;
class AiPart;
*/

class GameDatabase;

class GameObject {
friend class GameDatabase;
private:
    int ID; // unique ID within database
public:
    int id(void);
    PhysicPart* physic;
    InputPart* input;
    GameplayPart* gameplay;
    GraphicPart* graphic;
};

class GameDatabase : public Singleton<GameDatabase> {
friend class Singleton<GameDatabase>;
private:
    GameDatabase();
    std::list<GameObject> list;
    int id; // used to create unique ids
public:
    void add(GameObject* GameObject);
    GameObject* operator [](int id);
    void remove(int id);
};

#endif
