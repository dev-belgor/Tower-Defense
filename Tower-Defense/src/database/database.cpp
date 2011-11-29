#include "database/database.h"

int game_object::id() {
    return ID;
}

database::database() {
    id = 0;
}

void database::add(game_object* game_object) {
    game_object->ID = id;
    id++;
    list.push_back(*game_object);
}

game_object* database::operator [] (int i) {
    // valid range
    if (i >= id) {
        return NULL;
    }
    std::list<game_object>::iterator iter;

    iter = list.begin();
    while ( iter->id() != i ) {
        iter++;
    }
    return (game_object*)(&*iter);
}

void database::remove(int i) {
    // valid range:
    if (i < id) {
        std::list<game_object>::iterator iter;

        iter =list.begin();
        while (iter->id() != i) {
            iter++;
        }
        list.erase(iter);
    }
}
