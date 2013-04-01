
#include "mot.hpp"

namespace entrJap { namespace modMot {

Mot::Mot( const std::string & inHiraKata,
          const std::string & inRoumaji,
          const std::vector< std::string > & inFrancais )
   : hiraKata_( inHiraKata ), roumaji_( inRoumaji ), francais_( inFrancais )
{
}

Mot::~Mot()
{}

const std::string & Mot::getHiraKata() const
{
   return hiraKata_;
}

const std::string & Mot::getRoumaji() const
{
   return roumaji_;
}

const std::vector< std::string > & Mot::getFrancais() const
{
   return francais_;
}

bool Mot::isHiraKata() const
{
   return false;
}

} }

namespace {

std::string concatenerFrancais( const std::vector< std::string > & inFrancais )
{
   std::string outFrancais = "";
   std::string separateur = "";
   
   for ( std::vector< std::string >::const_iterator traductionCourante = inFrancais.begin();
         traductionCourante != inFrancais.end();
         ++traductionCourante )
   {
      outFrancais += separateur + *traductionCourante;
      separateur = ", ";
   }

   return outFrancais;
}

} // unnamed namespace

std::ostream & operator << ( std::ostream & inO, const entrJap::modMot::Mot & inMot )
{
   inO << inMot.getHiraKata()
       << ":"
       << inMot.getRoumaji()
       << ":"
       << concatenerFrancais( inMot.getFrancais() );

   return inO;
}
