/*
 * Copyright (C) 2015 Fondazione Istituto Italiano di Tecnologia
 * Authors: Silvio Traversaro
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef IDYNTREE_TRANSFORM_RAW_H
#define IDYNTREE_TRANSFORM_RAW_H

#include <string>
#include "PositionRaw.h"
#include "RotationRaw.h"

namespace iDynTree
{
    /**
     * Class providing the raw coordinates for iDynTree::Transform class.
     *
     */
    class TransformRaw
    {
    protected:
        RotationRaw rot;
        PositionRaw pos;

    public:
        /**
         * Default constructor: initialize the rotation to the identity and the translation to 0
         */
        TransformRaw();

        /**
         * Constructor from a rotation and a point
         */
        TransformRaw(const RotationRaw & rot, const PositionRaw & origin);

        /**
         * Copy constructor: create a Transform from a TransformRaw.
         */
        TransformRaw(const TransformRaw & other);

        /**
         * Denstructor
         */
        virtual ~TransformRaw();

        // semantics operation
        static TransformRaw compose(const TransformRaw & op1, const TransformRaw & op2);
        static TransformRaw inverse2(const TransformRaw & trans);
        static PositionRaw apply(const TransformRaw & op1, const PositionRaw & op2);

        /** overloaded operators **/
        TransformRaw operator*(const TransformRaw & other) const;
        TransformRaw inverse() const;
        PositionRaw operator*(const PositionRaw & op2) const;

        /** @name Output helpers.
         *  Output helpers.
         */
        ///@{
        std::string toString() const;
        ///@}
    };
}

#endif