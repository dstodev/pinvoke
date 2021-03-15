add_library(producer SHARED
	myclass.h
	myclass.cpp
)
target_include_directories(producer
	INTERFACE
		${CMAKE_CURRENT_LIST_DIR}
)
set_target_properties(producer PROPERTIES
	WINDOWS_EXPORT_ALL_SYMBOLS ON
)
