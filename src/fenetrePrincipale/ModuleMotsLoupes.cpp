
#include "ModuleMotsLoupes.hpp"

#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

namespace entrJap { namespace fenPrinc {

ModuleMotsLoupes::ModuleMotsLoupes()
{
   creationFenetre();
}

void ModuleMotsLoupes::creationFenetre()
{
   QVBoxLayout * layoutGroupBox = new QVBoxLayout();

   QHBoxLayout * layoutBoutons = new QHBoxLayout();
   boutonDemarrer_ = new QPushButton( "Démarrer" );
   layoutBoutons->addWidget( boutonDemarrer_ );
   boutonArreter_ = new QPushButton( "Arrêter" );
   layoutBoutons->addWidget( boutonArreter_ );
   boutonRemiseAZero_ = new QPushButton( "Remise à zéro" );
   layoutBoutons->addWidget( boutonRemiseAZero_ );
   boutonSauvegarder_ = new QPushButton( "Sauvegarder" );
   layoutBoutons->addWidget( boutonSauvegarder_ );
   layoutGroupBox->addLayout( layoutBoutons );

   QHBoxLayout * layoutNombreErreurs = new QHBoxLayout();
   QLabel * label = new QLabel( tr( "Nombre d'ajout par erreur : " ) );
   layoutNombreErreurs->addWidget( label );
   nbAjout_ = new QSpinBox();
   label->setBuddy( nbAjout_ );
   nbAjout_->setValue( 2 );
   layoutNombreErreurs->addWidget( nbAjout_ );
   layoutGroupBox->addLayout( layoutNombreErreurs );

   QGroupBox * groupBox = new QGroupBox( tr( "Mots loupés" ) );
   groupBox->setLayout( layoutGroupBox );

   QVBoxLayout * layoutPrincipal = new QVBoxLayout();
   layoutPrincipal->addWidget( groupBox );
   setLayout( layoutPrincipal );
}

} }
