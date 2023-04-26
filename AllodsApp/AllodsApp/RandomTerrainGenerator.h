#pragma once

#include "Terrain.h"


class RandomTerrainGenerator
{
public:
  Terrain generateRandomTerrain(const int i_sizeX, const int i_sizeY) const;
};
