
#include "ModuleGestionFichier.hpp"

#include <QtGui/QVBoxLayout>

namespace entrJap { namespace fenPrinc {

ModuleGestionFichier::ModuleGestionFichier()
{
   creationFenetre();
}

void ModuleGestionFichier::creationFenetre()
{
   QVBoxLayout * layoutPrincipal = new QVBoxLayout();

   vueArbre_ = new QTreeView();
   layoutPrincipal->addWidget( vueArbre_ );

   boutonActualiserExercice_ = new QPushButton( tr( "Actualiser exercice" ) );
   layoutPrincipal->addWidget( boutonActualiserExercice_ );

   boutonChargerArbre_ = new QPushButton( tr( "Charger arbre" ) );
   layoutPrincipal->addWidget( boutonChargerArbre_ );
   boutonSauvegarderArbre_ = new QPushButton( tr( "Sauvegarder arbre" ) );
   layoutPrincipal->addWidget( boutonSauvegarderArbre_ );
   boutonEditerFichier_ = new QPushButton( tr( "Éditer arbre" ) );
   layoutPrincipal->addWidget( boutonEditerFichier_ );

   setLayout( layoutPrincipal );
}

} }
