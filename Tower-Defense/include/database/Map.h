#ifndef __MAP__H__
#define __MAP__H__

#include <string>

class Map {

public:
    class Variables {
    public:
        static const std::string VERSION;
        static const std::string AUTHOR;
        static const std::string DESCRIPTION;
        static const std::string THEME;
        static const std::string SIZE;
    };
};

//const std::string Map::Variables::VERSION = "Version";

#endif
