#include "database/UiDatabase.h"

int UiObject::id() {
    return ID;
}

UiDatabase::UiDatabase() {
    id = 0;
}

void UiDatabase::add(UiObject* UiObject) {
    UiObject->ID = id;
    id++;
    list.push_back(*UiObject);
}

UiObject* UiDatabase::operator [] (int i) {
    // valid range
    if (i >= id) {
        return NULL;
    }
    std::list<UiObject>::iterator iter;

    iter = list.begin();
    while ( iter->id() != i ) {
        iter++;
    }
    return (UiObject*)(&*iter);
}

void UiDatabase::remove(int i) {
    // valid range:
    if (i < id) {
        std::list<UiObject>::iterator iter;

        iter =list.begin();
        while (iter->id() != i) {
            iter++;
        }
        list.erase(iter);
    }
}

