/* bzflag
 * Copyright (c) 1993-2010 Tim Riker
 *
 * This package is free software;  you can redistribute it and/or
 * modify it under the terms of the license found in the file
 * named COPYING that should have accompanied this file.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef __PYRAMIDSCENENODEGENERATOR_H__
#define __PYRAMIDSCENENODEGENERATOR_H__

#include "obstacle/ObstacleSceneNodeGenerator.h"
#include "obstacle/PyramidBuilding.h"

class PyramidSceneNodeGenerator : public ObstacleSceneNodeGenerator {
    friend class SceneDatabaseBuilder;
  public:
    ~PyramidSceneNodeGenerator();

    WallSceneNode*  getNextNode(float, float, bool);

  protected:
    PyramidSceneNodeGenerator(const PyramidBuilding*);

  private:
    const PyramidBuilding*  pyramid;
};

#endif

// Local Variables: ***
// mode: C++ ***
// tab-width: 8 ***
// c-basic-offset: 2 ***
// indent-tabs-mode: nil ***
// End: ***
// ex: shiftwidth=2 tabstop=8 expandtab