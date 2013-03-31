
#include "FenetrePrincipale.hpp"

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

   setLayout(layoutPrincipal);
}

} }
