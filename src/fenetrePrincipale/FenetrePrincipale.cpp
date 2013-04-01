
#include "FenetrePrincipale.hpp"

#include "ModuleChoixExercice.hpp"
#include "ModuleGestionFichier.hpp"
#include "ModuleMotsLoupes.hpp"
#include "ModuleOptionnel.hpp"
#include "ModulePrincipal.hpp"

#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>

namespace entrJap { namespace fenPrinc {

FenetrePrincipale::FenetrePrincipale()
{
   creationFenetre();
}

void FenetrePrincipale::creationFenetre()
{
   QSplitter * splitter = new QSplitter();

   QVBoxLayout * layoutChoix = new QVBoxLayout();
   layoutChoix->addWidget( new ModulePrincipal() );
   layoutChoix->addWidget(
      new ModuleOptionnel(
         new ModuleChoixExercice(), tr( "choix exercice" ) ) );
   layoutChoix->addWidget(
      new ModuleOptionnel( new ModuleMotsLoupes(), tr( "mots loupés" ) ) );
   QWidget * tempWidget = new QWidget();
   tempWidget->setLayout( layoutChoix );
   splitter->addWidget( tempWidget );

   splitter->addWidget( new ModuleGestionFichier() );

   QVBoxLayout * layoutPrincipal = new QVBoxLayout();
   layoutPrincipal->addWidget( splitter );
   
   setLayout(layoutPrincipal);
}

} }
