
#ifndef ENTR_JAP_FEN_PRINC_MODULEMOTSLOUPES_HPP
#define ENTR_JAP_FEN_PRINC_MODULEMOTSLOUPES_HPP

#include <QtGui/QWidget>

#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

namespace entrJap { namespace fenPrinc {

class ModuleMotsLoupes : public QWidget
{
   Q_OBJECT
   public :
      ModuleMotsLoupes();

   private :
      QPushButton * boutonDemarrer_;
      QPushButton * boutonArreter_;
      QPushButton * boutonRemiseAZero_;
      QPushButton * boutonSauvegarder_;
      QSpinBox * nbAjout_;

      void creationFenetre();
};

} }

#endif
