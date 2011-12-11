#ifndef __COMPONENT__H__
#define __COMPONENT__H__

class Component {
public:
    virtual void init() = 0;
    virtual void update() = 0;
};

#endif
