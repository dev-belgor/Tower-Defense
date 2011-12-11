#ifndef __DATABASE__H__
#define __DATABASE__H__

/*

The idea is really to make UiDatabase and GameDatabase inherit from a Database template
However, I haven't figured out yet how to make sure the template parameter inherits
from an item class, because we need this interface.
Maybe it's just better not to make UiDatabase and GameDatabase inherit from such a Database

*/

/*
class item {
private:
    int ID;
public:
    int id();
};

template <class item>
class Database {
public:
    void add(item* UiObject);
    item* operator [](int id);
    void remove(int id);
};
*/

#endif
