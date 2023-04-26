#pragma once

#include "Session.h"

#include <LaggyDx/Game.h>


class Game : public Dx::Game
{
public:
  Game();

private:
  std::unique_ptr<Session> d_session;
  bool hasSession() const;
  void attachSession(std::unique_ptr<Session> i_session);
  void detachSession();
  void startNewSession();

  virtual void onGameStart() override;
};
