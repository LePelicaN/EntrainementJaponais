
#include "FenetrePrincipale.hpp"

#include "ModuleChoixExercice.hpp"
#include "ModuleOptionnel.hpp"
#include "ModulePrincipal.hpp"

#include <QtGui/QVBoxLayout>

namespace entrJap { namespace fenPrinc {

FenetrePrincipale::FenetrePrincipale()
{
   creationFenetre();
}

void FenetrePrincipale::creationFenetre()
{
   QVBoxLayout * layoutPrincipal = new QVBoxLayout();

   layoutPrincipal->addWidget( new ModulePrincipal() );
   layoutPrincipal->addWidget(
      new ModuleOptionnel( new ModuleChoixExercice(), tr( "choix exercice" ) ) );

   layoutPrincipal->setSizeConstraint( QLayout::SetFixedSize );
   
   setLayout(layoutPrincipal);
}

} }
