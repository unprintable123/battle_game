#pragma once
#include "cstdint"
#include "input_data.h"

namespace battle_game {
class GameCore;

class SceneManager {
 public:
  SceneManager();
  static SceneManager *GetInstance();
};

class Scene {
 public:
  Scene(GameCore *game_core);

 private:
  GameCore *game_core_{};
};
}  // namespace battle_game