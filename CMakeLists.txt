cmake_minimum_required(VERSION 2.8.4)
project(College)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    class01/DecimalToBinary.h
    class01/DecisionMaking.h
    class01/NumberMirror.h
    class01/ReadingNumbers.h
    class02/LCM.h
    class02/Sort.h
    class03/CalculateE.h
    class03/DivisionBy3.h
    class03/SetSolver.h
    class03/SplitNumbers.h
    projects/Account.h
    projects/RootSolver.h
    .gitignore
    main.c)

add_executable(College ${SOURCE_FILES})