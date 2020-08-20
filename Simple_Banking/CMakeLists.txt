cmake_minimum_required(VERSION 3.15)
project(Simple_Banking)

set(CMAKE_CXX_STANDARD 14)

add_executable(Simple_Banking src/main.cpp src/account/Account.cpp include/Account.h src/account/Savings_Account.cpp include/Savings_Account.h src/account/Checking_Account.cpp include/Checking_Account.h src/account/Trust_Account.cpp include/Trust_Account.h src/account/I_Printable.cpp include/I_Printable.h src/main.cpp src/screen/Screen.cpp include/Screen.h src/backend/Credit_Generator.cpp include/Credit_Generator.h src/backend/Credit_verifier.cpp include/Credit_verifier.h src/account/Account_Collection.cpp include/Account_Collection.h src/backend/Controller.cpp include/Controller.h)