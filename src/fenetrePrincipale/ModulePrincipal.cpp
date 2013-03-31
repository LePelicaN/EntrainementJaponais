
#include "ModulePrincipal.hpp"

#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>

namespace entrJap { namespace fenPrinc {

ModulePrincipal::ModulePrincipal()
{
   creationFenetre();
}

namespace {

QLayout * creerTexte( QLineEdit ** outTexte,
                      QGridLayout * inOutLayout,
                      int inNumeroLigne,
                      const QString & inLabel )
{
   QLabel * label = new QLabel( inLabel );
   *outTexte = new QLineEdit();
   label->setBuddy( *outTexte );

   QGridLayout * outLayout = new QGridLayout();
   inOutLayout->addWidget( label, inNumeroLigne, 0, 1, 1 );
   inOutLayout->addWidget( *outTexte, inNumeroLigne, 1, 1, 1 );

   return outLayout;
}

} // unnamed namespace

void ModulePrincipal::creationFenetre()
{
   QGridLayout * layoutPrincipal = new QGridLayout();

   int numeroLigne = 0;
   creerTexte( &texteHiraKata_, layoutPrincipal, numeroLigne++, tr( "&Hiragana / Katakana : " ) );
   creerTexte( &texteRoumaji_, layoutPrincipal, numeroLigne++, tr( "&Français : " ) );
   creerTexte( &texteFrancais_, layoutPrincipal, numeroLigne++, tr( "&Roumaji : " ) );

   labelResultat_ = new QLabel( "" );
   layoutPrincipal->addWidget( labelResultat_, numeroLigne++, 0, 1, 2 );

   QHBoxLayout * layoutBouton = new QHBoxLayout();
   boutonValider_ = new QPushButton( tr( "Valider (Enter)" ) );
   layoutBouton->addWidget( boutonValider_ );
   boutonReponse_ = new QPushButton( tr( "Réponse (Up)" ) );
   layoutBouton->addWidget( boutonReponse_ );
   boutonNouveau_ = new QPushButton( tr( "Nouveau (Down)" ) );
   layoutBouton->addWidget( boutonNouveau_ );
   boutonEffacer_ = new QPushButton( tr( "Effacer (Left)" ) );
   layoutBouton->addWidget( boutonEffacer_ );
   layoutPrincipal->addLayout( layoutBouton, numeroLigne++, 0, 1, 2 );

   setLayout(layoutPrincipal);
}

} }
