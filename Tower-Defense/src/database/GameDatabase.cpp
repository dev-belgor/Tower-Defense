#include "database/GameDatabase.h"

int GameObject::id() {
    return ID;
}

GameDatabase::GameDatabase() {
    id = 0;
}

void GameDatabase::add(GameObject* GameObject) {
    GameObject->ID = id;
    id++;
    list.push_back(*GameObject);
}

GameObject* GameDatabase::operator [] (int i) {
    // valid range
    if (i >= id) {
        return NULL;
    }
    std::list<GameObject>::iterator iter;

    iter = list.begin();
    while ( iter->id() != i ) {
        iter++;
    }
    return (GameObject*)(&*iter);
}

void GameDatabase::remove(int i) {
    // valid range:
    if (i < id) {
        std::list<GameObject>::iterator iter;

        iter =list.begin();
        while (iter->id() != i) {
            iter++;
        }
        list.erase(iter);
    }
}
