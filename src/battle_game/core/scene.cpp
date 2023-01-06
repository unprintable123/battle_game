#include "battle_game/core/scene.h"

#include "battle_game/core/game_core.h"

namespace battle_game {

SceneManager *SceneManager::GetInstance() {
  static SceneManager scene_manager;
  return &scene_manager;
}

Scene::Scene(GameCore *game_core) : game_core_(game_core) {
}

}  // namespace battle_game
