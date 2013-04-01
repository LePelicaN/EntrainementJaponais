
#ifndef ENTR_JAP_FEN_PRINC_DICTIONNAIRE_HPP
#define ENTR_JAP_FEN_PRINC_DICTIONNAIRE_HPP

#include "hiragana.hpp"
#include "katakana.hpp"
#include "mot.hpp"

#include <map>
#include <string>

namespace entrJap { namespace modMot {

class Dictionnaire
{
   public :
      typedef std::string HiraKata;
      typedef std::map< HiraKata, Hiragana > ContainerHiragana;
      typedef std::map< HiraKata, Katakana > ContainerKatakana;
      typedef std::multimap< HiraKata, Mot > ContainerMot;

      bool ajouterHiragana( const Hiragana & inHiragana );
      bool ajouterKatakana( const Katakana & inKatakana );
      bool ajouterMot( const Mot & inMot );

   private :
      ContainerHiragana hiragana_;
      ContainerKatakana katakana_;
      ContainerMot donnees_;
};

} }

#endif
