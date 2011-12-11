#include "database/GameDatabase.h"

int GameObject::id() {
    return ID;
}

Database::Database() {
    id = 0;
}

void Database::add(GameObject* GameObject) {
    GameObject->ID = id;
    id++;
    list.push_back(*GameObject);
}

GameObject* Database::operator [] (int i) {
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

void Database::remove(int i) {
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
