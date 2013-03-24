
find_package( Boost 1.46 COMPONENTS regex )

if ( NOT Boost_FOUND  )
	message( STATUS "Boost n'a pas ete trouvé." )
   set( BOOST_ROOT ${BOOST_ROOT} CACHE PATH "Path to Boost include folder." FORCE )
endif ()

if ( "${Boost_LIBRARY_DIRS}" STREQUAL "" )
   if ( "${BOOST_LIB}" STREQUAL "" )
      set( BOOST_LIB "$ENV{BOOST_LIB}" )
   endif()

   set( BOOST_LIB ${BOOST_LIB} CACHE PATH "Path to Boost include folder." FORCE )
   set( Boost_LIBRARY_DIRS ${BOOST_LIB} )
   message( "Le repertoire de la biblioth?que a ete mis de force à : \""
            ${BOOST_LIB}
            "\"Pour changer cette valeur, modifier la valeur de 'BOOST_LIB'." )
endif()

message( STATUS "Boost_INCLUDE_DIRS : '" ${Boost_INCLUDE_DIRS} "'" )
message( STATUS "Boost_LIBRARIES : '" ${Boost_LIBRARIES} "'" )
message( STATUS "Boost_LIBRARY_DIRS : '" ${Boost_LIBRARY_DIRS} "'" )
