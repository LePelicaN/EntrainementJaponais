
#ifndef ENTR_JAP_FEN_PRINC_MODULEGESTIONFICHIER_HPP
#define ENTR_JAP_FEN_PRINC_MODULEGESTIONFICHIER_HPP

#include <QtGui/QWidget>

#include <QtGui/QPushButton>
#include <QtGui/QTreeView>

namespace entrJap { namespace fenPrinc {

class ModuleGestionFichier : public QWidget
{
   Q_OBJECT
   public :
      ModuleGestionFichier();

   private :
      QTreeView * vueArbre_;

      QPushButton * boutonActualiserExercice_;

      QPushButton * boutonChargerArbre_;
      QPushButton * boutonSauvegarderArbre_;
      QPushButton * boutonEditerFichier_;

      void creationFenetre();
};

} }

#endif
