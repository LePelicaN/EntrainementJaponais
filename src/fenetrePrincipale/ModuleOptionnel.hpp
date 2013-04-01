
#ifndef ENTR_JAP_FEN_PRINC_MODULEOPTIONNEL_HPP
#define ENTR_JAP_FEN_PRINC_MODULEOPTIONNEL_HPP

#include <QtGui/QWidget>

#include <QtGui/QPushButton>

namespace entrJap { namespace fenPrinc {

class ModuleOptionnel : public QWidget
{
   Q_OBJECT
   public :
      ModuleOptionnel( QWidget * inWidgetPrincipal,
                       const QString & inNomModule,
                       bool inAfficher = false );

   private :
      QWidget * widgetPrincipal_;
      QString nomModule_;
      bool afficher_;
      QPushButton * boutonAfficherMasquer_;

      void creationFenetre();
      void creationConnexion();

   private slots :
      void afficherMasquer();
};

} }

#endif
