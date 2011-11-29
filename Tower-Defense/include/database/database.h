#include <list>
#include <cstddef>
#include "util/singleton.h"

class physic_part;
class input_part;
class gameplay_part;
class graphic_part;
/* For future versions:
class sound_part;
class ai_part;
*/

class database;

class game_object {
friend class database;
private:
    int ID; // unique ID within database
public:
    int id(void);
    physic_part* physic;
    input_part* input;
    gameplay_part* gameplay;
    graphic_part* graphic;
};

class database : public singleton<database> {
friend class singleton<database>;
private:
    database();
    std::list<game_object> list;
    int id; // used to create unique ids
public:
    void add(game_object* game_object);
    game_object* operator [](int id);
    void remove(int id);
};
