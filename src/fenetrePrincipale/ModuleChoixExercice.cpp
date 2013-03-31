
#include "ModuleChoixExercice.hpp"

#include <QtGui/QHBoxLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QVBoxLayout>

namespace entrJap { namespace fenPrinc {

ModuleChoixExercice::ModuleChoixExercice()
{
   creationFenetre();

   radioMot_->setChecked( true );
   radioAleatoireSansOk_->setChecked( true );
}

void ModuleChoixExercice::creationFenetre()
{
   QVBoxLayout * layoutPrincipal = new QVBoxLayout();
   layoutPrincipal->addWidget( creationWidgetTypeMot() );
   layoutPrincipal->addWidget( creationWidgetTypeExercice() );

   afficherRomaji_ = new QCheckBox( tr( "Afficher les romajis" ) );
   layoutPrincipal->addWidget( afficherRomaji_ );
   
   setLayout(layoutPrincipal);
}

QWidget * ModuleChoixExercice::creationWidgetTypeMot()
{
   QHBoxLayout * layoutBouton = new QHBoxLayout();
   radioHiragana_ = new QRadioButton( tr( "Hiragana" ) );
   layoutBouton->addWidget( radioHiragana_ );
   radioKatakana_ = new QRadioButton( tr( "Katakana" ) );
   layoutBouton->addWidget( radioKatakana_ );
   radioMot_ = new QRadioButton( tr( "Mot" ) );
   layoutBouton->addWidget( radioMot_ );

   loupeUniquement_ = new QCheckBox( tr( "Échoués uniquement" ) );
   layoutBouton->addWidget( loupeUniquement_ );

   QGroupBox * groupBox = new QGroupBox( tr( "Choix type mot" ) );
   groupBox->setLayout( layoutBouton );

   return groupBox;
}

QWidget * ModuleChoixExercice::creationWidgetTypeExercice()
{
   QHBoxLayout * layoutBouton = new QHBoxLayout();
   radioTotalAleatoire_ = new QRadioButton( tr( "Total aléatoire" ) );
   layoutBouton->addWidget( radioTotalAleatoire_ );
   radioAleatoireSansOk_ = new QRadioButton( tr( "Aléatoire sans Ok" ) );
   layoutBouton->addWidget( radioAleatoireSansOk_ );
   radioALaSuite_ = new QRadioButton( tr( "A la Suite" ) );
   layoutBouton->addWidget( radioALaSuite_ );

   QGroupBox * groupBox = new QGroupBox( tr( "Choix type exercice" ) );
   groupBox->setLayout( layoutBouton );

   return groupBox;
}

} }
