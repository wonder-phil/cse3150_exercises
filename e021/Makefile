CC=g++
# CFLAGS will be the options passed to the compiler.
CFLAGS= -std=c++17

OBJECTS_basic_template = merge_sort_BASIC_TEMPLATES_main.o 
all: ms_basic

OBJECTS_test_basic_template = unit_tests_BASIC_merge_sort.o 
all: test_ms_basic

OBJECTS_gen_template = merge_sort_GEN_TEMPLATES_main.o 
all: ms_gen

# merge_sort_BASIC_TEMPLATES_main.o: merge_sort_BASIC_TEMPLATES_main.cpp

ms_basic: $(OBJECTS_basic_template)
	$(CC) $(OBJECTS_basic_template) -o ms_basic

test_ms_basic: $(OBJECTS_test_basic_template)
	$(CC) $(OBJECTS_test_basic_template) -o test_ms_basic


ms_gen: $(OBJECTS_gen_template)
	$(CC) $(OBJECTS_gen_template) -o ms_gen

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o ./ms_basic ./ms_gen
