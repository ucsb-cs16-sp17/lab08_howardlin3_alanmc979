XX = g++
CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= anagramTests \
         palindromeIterativeTests \
         palindromeRecursiveTests \
         palindromeTests \


COMMON_OBJECT_FILES = strFuncs.o tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./anagramTests
	./palindromeIterativeTests
	./palindromeRecursiveTests
	./palindromeTests


anagramTests: anagramTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

palindromeIterativeTests: palindromeIterativeTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

palindromeRecursiveTests: palindromeRecursiveTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

palindromeTests: palindromeTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
