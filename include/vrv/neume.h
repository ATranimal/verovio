/////////////////////////////////////////////////////////////////////////////
// Name:        note.h
// Author:      Andrew Tran
// Created:     2017
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_NEUME_H__
#define __VRV_NEUME_H__

#include <assert.h>

//----------------------------------------------------------------------------

#include "accid.h"
#include "atts_mensural.h"
#include "atts_shared.h"
#include "beam.h"
#include "chord.h"
#include "durationinterface.h"
#include "layerelement.h"
#include "pitchinterface.h"

namespace vrv {

class Accid;
class Chord;
class Slur;
class Tie;
class Verse;
class Neume;

//----------------------------------------------------------------------------
// Note
//----------------------------------------------------------------------------

/**
 * This class models the MEI <note> element.
 */

class Neume : public LayerElement,
              public ObjectListInterface,
             public AttColor {
public:
    /**
     * @name Constructors, destructors, reset and class name methods
     * Reset method resets all attribute classes
     */
    ///@{
    Neume();

    virtual ~Neume();

    virtual void Reset();

    virtual std::string GetClassName() const { return "Neume"; }

    virtual ClassId GetClassId() const { return NEUME; }
    ///@}

    /**
    * Add an element (a note or a rest) to a syllable.
    * Only syl or neume will be added.
    */
    virtual void AddChild(Object *object);


private:
};
} // namespace vrv

#endif