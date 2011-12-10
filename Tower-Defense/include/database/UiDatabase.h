#ifndef __UIDATABASE__H__
#define __UIDATABASE__H__

#include <list>
#include <cstddef>
#include "util/Singleton.h"
// TODO: may want to remove this:
#include "database/Database.h"

// forward declaration for UiObject
class InputPart;
class GameplayPart;
class GraphicPart;
/* For future versions:
class SoundPart;
*/

class UiDatabase;

class UiObject {
friend class UiDatabase;
private:
    int ID; // unique ID within UiDatabase
public:
    int id(void);
    InputPart* input;
    GameplayPart* gameplay;
    GraphicPart* graphic;
};

class UiDatabase : public Singleton<UiDatabase> {
friend class Singleton<UiDatabase>;
private:
    UiDatabase();
    std::list<UiObject> list;
    int id; // used to create unique ids
public:
    void add(UiObject* UiObject);
    UiObject* operator [](int id);
    void remove(int id);
};

#endif
