
#ifndef ENTR_JAP_FEN_PRINC_HIRAGANA_HPP
#define ENTR_JAP_FEN_PRINC_HIRAGANA_HPP

#include "mot.hpp"

namespace entrJap { namespace modMot {

class Hiragana : public Mot
{
   public:
      virtual bool isHiraKata() const;
};

} }

#endif
