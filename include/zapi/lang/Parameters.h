// Copyright 2017-2018 zzu_softboy <zzu_softboy@163.com>
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Created by softboy on 5/26/17.

#ifndef ZAPI_LANG_PARAMETERS_H
#define ZAPI_LANG_PARAMETERS_H

#include "zapi/Global.h"
#include "zapi/lang/Variant.h"

#include <vector>

namespace zapi
{
namespace lang
{

class StdClass;

/**
 * now this is very bad implemention of parameters class, but it works
 */
class ZAPI_DECL_EXPORT Parameters : public std::vector<Variant>
{
private:
   /**
    *  The base object
    *  @var Base
    */
   StdClass *m_object = nullptr;

protected:
   Parameters(StdClass *object) : m_object(object)
   {}

public:
   StdClass *getObject() const
   {
      return m_object;
   }
};

} // lang
} // zapi

#endif //ZAPI_LANG_PARAMETERS_H
