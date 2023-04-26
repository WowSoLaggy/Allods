#include "stdafx.h"
#include "Game.h"

#include "GameEvents.h"
#include "SessionLoader.h"

#include <LaggyDx/GameSettings.h>


namespace
{
  const Dx::GameSettings& getGameSettings()
  {
    static Dx::GameSettings settings;
    return settings;
  }

} // anonym NS


Game::Game()
  : Dx::Game(getGameSettings())
{
}


void Game::onGameStart()
{
  startNewSession();
}


bool Game::hasSession() const
{
  return d_session.get() != nullptr;
}

void Game::attachSession(std::unique_ptr<Session> i_session)
{
  if (hasSession())
    detachSession();

  d_session = std::move(i_session);
  notify(SessionAttachedEvent(*this));
}

void Game::detachSession()
{
  if (hasSession())
  {
    d_session.reset();
    notify(SessionDetachedEvent(*this));
  }
}

void Game::startNewSession()
{
  auto newSession = SessionLoader().createNew();
  attachSession(std::make_unique<Session>(std::move(newSession)));
}
