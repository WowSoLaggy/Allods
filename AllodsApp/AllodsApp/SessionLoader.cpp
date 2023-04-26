#include "stdafx.h"
#include "SessionLoader.h"

#include "RandomWorldGenerator.h"


Session SessionLoader::createNew() const
{
  Session session;

  auto randomWorld = RandomWorldGenerator().generateRandomWorld(10, 10);
  session.setWorld(std::make_unique<World>(std::move(randomWorld)));

  return session;
}
