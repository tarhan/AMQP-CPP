/**
 *  Void field type for AMQP
 *
 *  @copyright 
 */

/**
 *  Include guard
 */
#pragma once

/**
 *  Dependencies
 */
#include <memory>
#include "inbuffer.h"
#include "outbuffer.h"
#include "field.h"

/**
 *  Set up namespace
 */
namespace AMQP
{
class VoidField : public Field
{
private:
    /**
     *  Field have no value
     */
    
public:
    /**
     *  Default constructor
     */
    VoidField() {}

    /**
     *  Parse based on incoming buffer
     *  @param  frame
     */
    VoidField(InBuffer &frame)
    {

    }

    /**
 *  Destructor
 */
    virtual ~VoidField() {}

    /**
     *  Create a new instance of this object
     *  @return Field*
     */
    virtual std::shared_ptr<Field> clone() const override
    {
        // create a new copy of ourselves and return it
        return std::make_shared<VoidField>();
    }

    /**
     *  Get the size this field will take when
     *  encoded in the AMQP wire-frame format
     *  @return size_t
     */
    virtual size_t size() const override
    {
        // numeric types have no extra storage requirements
        return 0;
    }

    /**
     *  Write encoded payload to the given buffer.
     *  @param  buffer      OutBuffer to write to
     */
    virtual void fill(OutBuffer &buffer) const override
    {
    }

    /**
     *  Get the type ID that is used to identify this type of
     *  field in a field table
     */
    virtual char typeID() const override
    {
        return 'V';
    }

    /**
     *  Output the object to a stream
     *  @param std::ostream
     */
    virtual void output(std::ostream &stream) const override
    {
        // show
        stream << "void()";
    }

    /**
     *  We are an void field
     *
     *  @return true, because we are an void
     */
    bool isVoid() const override
    {
        return true;
    }
};

/**
 *  end namespace
 */
}
