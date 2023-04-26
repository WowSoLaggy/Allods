#include "stdafx.h"
#include "Session.h"


void Session::setWorld(std::unique_ptr<World> i_world)
{
  d_world = std::move(i_world);
}

World* Session::getWorld() const
{
  return d_world.get();
}
