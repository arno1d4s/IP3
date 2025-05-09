CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

DEMO_SRC = demo.cpp NetworkManager.cpp WiFiConnection.cpp EthernetConnection.cpp
DEMO_EXE = demo_program

TEST_SRC = test.cpp #MobileDataConnection.cpp
TEST_EXE = test_program

run_demo:
	$(CXX)	$(CXXFLAGS)	-o	$(DEMO_EXE)	$(DEMO_SRC)
	./$(DEMO_EXE)

run_tests:
	$(CXX)	$(CXXFLAGS)	-o	$(TEST_EXE)	$(TEST_SRC)
	./$(TEST_EXE)

clean:
	rm	-f	$(DEMO_EXE)	$(TEST_EXE)
