#include "stdafx.h"
#include "TerrainTypeRng.h"


TerrainTypeRng::TerrainTypeRng()
  : d_rng(0, (int)TerrainType::Count)
{
}


TerrainType TerrainTypeRng::next()
{
  return static_cast<TerrainType>(d_rng.getNextValue());
}
