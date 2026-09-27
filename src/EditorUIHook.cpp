#include "EditorUIHook.hpp"

bool MyEditorUI::init(LevelEditorLayer* editorLayer) {
    if (!EditorUI::init(editorLayer))
        return false;

    alpha::editor_tabs::addTab(
        "speed5x"_spr,
        alpha::editor_tabs::BUILD,
        [this] {
            auto items = CCArray::create();

            auto obj = this->getCreateBtn(203, 4);

            if (obj)
                items->addObject(obj);

            return EditButtonBar::create(
                items,
                {},
                -1,
                false,
                GameManager::get()->getIntGameVariable("0049"),
                GameManager::get()->getIntGameVariable("0050")
            );
        },
        [] {
            auto spr = CCSprite::createWithSpriteFrameName("portal_3x.png");
            spr->setScale(0.6f);
            return spr;
        }
    );

    log::info("5X EDITOR TAB ADDED!");
    return true;
}
