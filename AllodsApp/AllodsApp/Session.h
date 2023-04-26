#pragma once

#include "World.h"


class Session
{
public:
  void setWorld(std::unique_ptr<World> i_world);
  World* getWorld() const;

private:
  std::unique_ptr<World> d_world;
};
