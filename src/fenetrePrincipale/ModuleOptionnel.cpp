
#include "ModuleOptionnel.hpp"

#include <QtGui/QVBoxLayout>

namespace entrJap { namespace fenPrinc {

const QString texteAfficher = QObject::tr( "Afficher " );
const QString texteMasquer = QObject::tr( "Masquer " );

ModuleOptionnel::ModuleOptionnel( QWidget * inWidgetPrincipal,
                                  const QString & inNomModule,
                                  bool inAfficher  )
   : widgetPrincipal_( inWidgetPrincipal ),
     nomModule_( inNomModule ),
     afficher_( inAfficher )
{
   creationFenetre();
   creationConnexion();
}

namespace {

QString creerTexte( const QString & inNomModule, bool inAfficher )
{
   QString texte = inAfficher ? texteMasquer : texteAfficher;
   texte += inNomModule;
   return texte;
}

} // unnamed namespace

void ModuleOptionnel::creationFenetre()
{
   QVBoxLayout * layoutPrincipal = new QVBoxLayout();

   layoutPrincipal->addWidget( widgetPrincipal_ );
   widgetPrincipal_->setVisible( afficher_ );
   
   boutonAfficherMasquer_ = new QPushButton( creerTexte(nomModule_, afficher_ ) );
   layoutPrincipal->addWidget( boutonAfficherMasquer_ );

   setLayout( layoutPrincipal );
}

void ModuleOptionnel::creationConnexion()
{
   connect( boutonAfficherMasquer_, SIGNAL( clicked() ),
            this, SLOT( afficherMasquer() ) );
}

void ModuleOptionnel::afficherMasquer()
{
   afficher_ = !afficher_;
   widgetPrincipal_->setVisible( afficher_ );
   boutonAfficherMasquer_->setText( creerTexte(nomModule_, afficher_ ) );
   adjustSize();
}

} }
