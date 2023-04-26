#pragma once

#include "Terrain.h"


class World
{
public:
  void setTerrain(std::unique_ptr<Terrain> i_terrain);
  Terrain* getTerrain() const;

private:
  std::unique_ptr<Terrain> d_terrain;
};
