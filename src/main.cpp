#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects))
            return false;

        log::info("5x Speed Portal mod loaded!");
        return true;
    }
};

class $modify(MyEditorUI, EditorUI) {
    void selectObject(GameObject* object, bool ignoreFilter) {
        if (object) {
            log::info("Selected object ID: {}", object->m_objectID);
        }

        EditorUI::selectObject(object, ignoreFilter);
    }
};
