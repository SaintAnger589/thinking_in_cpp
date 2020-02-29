
#include <iostream>
#ifndef MIRROR_H_INCLUDED
#define MIRROR_H_INCLUDED

class Mirror {
public:
    Mirror() : flag(true), mPtr(nullptr) {}
    Mirror(Mirror* m) : mPtr(m), flag(false) {}

    bool test() {
        if (mPtr)
            return mPtr->test();

        return flag;
    }

private:
    Mirror* mPtr;
    bool flag;
};

#endif // MIRROR_H_INCLUDED
