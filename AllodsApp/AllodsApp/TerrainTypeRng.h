#pragma once

#include "TerrainType.h"

#include <LaggySdk/UniformIntGenerator.h>


class TerrainTypeRng
{
public:
  TerrainTypeRng();

  TerrainType next();

private:
  Sdk::UniformIntGenerator<int> d_rng;
};
