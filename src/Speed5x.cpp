#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(MyPlayerObject, PlayerObject) {
    void updateTimeMod(float speed, bool noEffects) {
        if (speed == 1.3f)
            speed = 2.1666667f;

        PlayerObject::updateTimeMod(speed, noEffects);
    }
};
