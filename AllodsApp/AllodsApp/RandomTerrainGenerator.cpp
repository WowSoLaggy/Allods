#include "stdafx.h"
#include "RandomTerrainGenerator.h"

#include "TerrainTypeRng.h"


Terrain RandomTerrainGenerator::generateRandomTerrain(const int i_sizeX, const int i_sizeY) const
{
  Terrain terrain(i_sizeX, i_sizeY);

  TerrainTypeRng rng;

  for (int y = 0; y < i_sizeY; ++y)
  {
    for (int x = 0; x < i_sizeX; ++x)
    {
      const auto randomType = rng.next();
      terrain.setTerrainType(randomType, x, y);
    }
  }

  return terrain;
}
