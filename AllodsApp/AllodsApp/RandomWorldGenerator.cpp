#include "stdafx.h"
#include "RandomWorldGenerator.h"

#include "RandomTerrainGenerator.h"


World RandomWorldGenerator::generateRandomWorld(const int i_sizeX, const int i_sizeY) const
{
  World world;

  auto terrain = RandomTerrainGenerator().generateRandomTerrain(i_sizeX, i_sizeY);
  world.setTerrain(std::make_unique<Terrain>(std::move(terrain)));

  return world;
}
