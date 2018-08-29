
add_library(calculate calculate.cxx)

target_link_libraries(calculate
		tree
)

add_executable(calc
	main.cxx
)

target_link_libraries(calc
		calculate
)
