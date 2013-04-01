
#ifndef ENTR_JAP_FEN_PRINC_KATAKANA_HPP
#define ENTR_JAP_FEN_PRINC_KATAKANA_HPP

#include "mot.hpp"

namespace entrJap { namespace modMot {

class Katakana : public Mot
{
   public:
      virtual bool isHiraKata() const;
};

} }

#endif
