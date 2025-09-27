CXXFLAGS := -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wno-missing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE -Iinclude
CPPOBJ := build/bubble_sort.o build/comparator.o build/main.o build/my_strcmp.o build/pointer_array.o build/reading_buffering.o

all: $(CPPOBJ) $(CXXFLAGS) -o main.exe

build/bubble_sort.o : src/bubble_sort.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/comparator.o : src/comparator.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/main.o : src/main.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/my_strcmp.o : src/my_strcmp.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/pointer_array.o : src/pointer_array.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/reading_buffering.o : src/reading_buffering.cpp
	g++ $(CXXFLAGS) -c $< -o $@

clean :
	rm build/*.o