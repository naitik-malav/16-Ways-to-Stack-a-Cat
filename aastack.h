#include "stack14.h"

class aastack : public astack {
    public:
        aastack(int id, int max) : astack(id, max) {}
        aastack(noop x) : astack(x) {}
        void push();
        void pop();
};