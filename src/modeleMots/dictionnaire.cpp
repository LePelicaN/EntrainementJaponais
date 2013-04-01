
#include "dictionnaire.hpp"

#include <string>

namespace entrJap { namespace modMot {

namespace {

template < typename Type >
bool dejaPresentHiraKata( const std::map< Dictionnaire::HiraKata, Type > & inMapHiraKata,
                          const Mot & inHiraKata )
{
   return inMapHiraKata.find( inHiraKata.getHiraKata() ) != inMapHiraKata.end();
}

} // unnamed namespace

bool Dictionnaire::ajouterHiragana( const Hiragana & inHiragana )
{
   if ( dejaPresentHiraKata( hiragana_, inHiragana ) )
   {
      return false;
   }
   hiragana_[ inHiragana.getHiraKata() ] = inHiragana;
   return true;
}

bool Dictionnaire::ajouterKatakana( const Katakana & inKatakana )
{
   if ( dejaPresentHiraKata( katakana_, inKatakana ) )
   {
      return false;
   }
   katakana_[ inKatakana.getHiraKata() ] = inKatakana;
   return true;
}

namespace {

bool francaisIdentique( const std::vector< std::string > inFrancais1,
                        const std::vector< std::string > inFrancais2 )
{
   if ( inFrancais1.size() != inFrancais2.size() )
   {
      return false;
   }
   for ( unsigned int i = 0; i < inFrancais1.size(); ++i )
   {
      if ( inFrancais1[ i ] != inFrancais2[ i ] )
      {
         return false;
      }
   }
   return true;
}

bool dejaPresentMot( const Dictionnaire::ContainerMot & inMapDonnes,
                     const Mot & inMot )
{
   std::pair< Dictionnaire::ContainerMot::const_iterator,
              Dictionnaire::ContainerMot::const_iterator > motsTrouves =
      inMapDonnes.equal_range( inMot.getHiraKata() );
   for ( Dictionnaire::ContainerMot::const_iterator motCourant = motsTrouves.first;
         motCourant != motsTrouves.second;
         ++motCourant )
   {
      if ( francaisIdentique( inMot.getFrancais(), motCourant->second.getFrancais() ) )
      {
         return false;
      }
   }
   return true;
}

} // unnamed namespace

bool Dictionnaire::ajouterMot( const Mot & inMot )
{
   if ( dejaPresentMot( donnees_, inMot ) )
   {
      return false;
   }
   donnees_.insert( std::make_pair( inMot.getHiraKata(), inMot ) );
   return true;
}

} }
