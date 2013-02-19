/* =========================================================================
 * This file is part of xml.lite-c++ 
 * =========================================================================
 * 
 * (C) Copyright 2004 - 2011, General Dynamics - Advanced Information Systems
 *
 * xml.lite-c++ is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this program; If not, 
 * see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __XML_LITE_VALIDATOR_EXPAT_H__
#define __XML_LITE_VALIDATOR_EXPAT_H__

#ifdef USE_EXPAT

#include <except/Exception.h>

namespace xml
{
namespace lite
{

/*!
 * \class ValidatorExpat
 * \brief Schema validation is done here.
 *
 * This class is the Expat schema validator
 */
class ValidatorExpat
{
public:

    ValidatorExpat(const std::vector<std::string>& schemaPaths, 
                   bool recursive = true)
    {
        throw except::Exception(Ctxt("Expat Validation Unimplemented"));
    }

    //! Destructor.
    virtual ~ValidatorExpat(){}

    /*!
     *  Validation against the internal schema
     *  \param errors  Object for returning errors found
     *  \param is      This is the input stream to feed the parser
     *  \param size    This is the size of the stream to feed the parser
     */
    virtual bool validate(std::vector<ValidationInfo>& errors,
                          io::InputStream& xml, 
                          sys::SSize_T size = io::InputStream::IS_END)
    {
        throw except::Exception(Ctxt("Expat Validation Unimplemented"));
    }

};
}
}

#endif

#endif
