
SET( QT_USE_QTNETWORK TRUE )
SET( QT_USE_QTXML TRUE )
SET( QT_USE_QTCONSOLE TRUE )

INCLUDE( ${QT_USE_FILE} )
ADD_DEFINITIONS( ${QT_DEFINITIONS} )

INCLUDE_DIRECTORIES( .
                     legacy
                     rechercheMot
                     rechercheMotGUI
                     utilitaires
                     ${CMAKE_CURRENT_SOURCE_DIR}
                     ${Boost_INCLUDE_DIRS} )

MESSAGE( STATUS ${CMAKE_CURRENT_BINARY_DIR} )
CONFIGURE_FILE( ${CMAKE_CURRENT_SOURCE_DIR}/config_version.hpp.cmake ${CMAKE_CURRENT_SOURCE_DIR}/config_version.hpp )

SET( SOURCES_RC resources/resource.qrc )

FILE( GLOB LEGACY_SRC "legacy/*.*" )
FILE( GLOB FENETRE_PRINCIPALE_SRC "fenetrePrincipale/*.*" )
FILE( GLOB MODELE_MOTS_SRC "modeleMots/*.*" )
FILE( GLOB RECHERCHE_MOT_SRC "rechercheMot/*.*" )
FILE( GLOB RECHERCHE_MOT_GUI_SRC "rechercheMotGUI/*.*" )
FILE( GLOB UTILITAIRES_SRC "utilitaires/*.*" )

SET( QTFILE_HEADERS
     legacy/fenetrePrincipale.h
     legacy/filtreEnter.h
     fenetrePrincipale/FenetrePrincipale.hpp
     fenetrePrincipale/ModuleChoixExercice.hpp
     fenetrePrincipale/ModuleGestionFichier.hpp
     fenetrePrincipale/ModuleOptionnel.hpp
     fenetrePrincipale/ModuleMotsLoupes.hpp
     fenetrePrincipale/ModulePrincipal.hpp
     rechercheMotGUI/chercheurMotWidget.hpp
     utilitaires/iRecupPageHTML.hpp
     utilitaires/rechercheGoogle.hpp
     utilitaires/recupPageHTML.hpp )

QT4_WRAP_CPP( QTFILE_HEADERS_MOC ${QTFILE_HEADERS} )
QT4_ADD_RESOURCES( SOURCES_RC_SRC ${SOURCES_RC} )

SOURCE_GROUP( Legacy FILES ${LEGACY_SRC} )
SOURCE_GROUP( FenetrePrincipale FILES ${FENETRE_PRINCIPALE_SRC} )
SOURCE_GROUP( ModeleMots FILES ${MODELE_MOTS_SRC} )
SOURCE_GROUP( RechercheMot FILES ${RECHERCHE_MOT_SRC} )
SOURCE_GROUP( RechercheMotGUI FILES ${RECHERCHE_MOT_GUI_SRC} )
SOURCE_GROUP( Utilitaires FILES ${UTILITAIRES_SRC} )

ADD_LIBRARY( src
#             SHARED
             ${LEGACY_SRC}
             ${FENETRE_PRINCIPALE_SRC}
             ${MODELE_MOTS_SRC}
             ${RECHERCHE_MOT_SRC}
             ${RECHERCHE_MOT_GUI_SRC}
             ${UTILITAIRES_SRC}
             ${QTFILE_HEADERS_MOC}
             ${SOURCES_RC_SRC} )

TARGET_LINK_LIBRARIES( src ${QT_LIBRARIES} ${Boost_LIBRARIES} libregex_builder.a )

ADD_EXECUTABLE( ${PROJECT_NAME}
                ${GUI_TYPE}
                main.cpp )

TARGET_LINK_LIBRARIES( ${PROJECT_NAME} ${QT_LIBRARIES} ${Boost_LIBRARIES} libregex_builder.a src )

#TARGET_LINK_LIBRARIES( src ${QT_LIBRARIES} qjson yaml-cpp)

#INSTALL(TARGETS src
#        BUNDLE DESTINATION . COMPONENT Runtime
#        LIBRARY DESTINATION lib COMPONENT Runtime)