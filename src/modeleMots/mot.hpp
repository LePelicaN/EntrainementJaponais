
#ifndef ENTR_JAP_FEN_PRINC_MOT_HPP
#define ENTR_JAP_FEN_PRINC_MOT_HPP

#include <QtCore/QMetaType>

#include <iostream>
#include <string>
#include <vector>

namespace entrJap { namespace modMot {

class Mot
{
   public:
      Mot( const std::string & inHiraKata = "",
           const std::string & inRoumaji = "",
           const std::vector< std::string > & inFrancais =  std::vector< std::string >() );
      virtual ~Mot();

      const std::string & getHiraKata() const;
      const std::string & getRoumaji() const;
      const std::vector< std::string > & getFrancais() const;

      virtual bool isHiraKata() const;

   private :
      std::string hiraKata_;
      std::string roumaji_;
      std::vector< std::string > francais_;
};

} }

std::ostream & operator << ( std::ostream & inO, const entrJap::modMot::Mot & inMot );

Q_DECLARE_METATYPE( entrJap::modMot::Mot )

#endif
