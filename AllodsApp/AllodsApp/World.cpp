#include "stdafx.h"
#include "World.h"


void World::setTerrain(std::unique_ptr<Terrain> i_terrain)
{
  d_terrain = std::move(i_terrain);
}

Terrain* World::getTerrain() const
{
  return d_terrain.get();
}
