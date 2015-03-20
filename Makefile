person: person.cpp person.h
	g++ person.cpp -o person

vector_stack: stack.cpp stack.h
	g++ -DVECTOR_BASED_STACK stack.cpp -o vector_stack

list_stack: stack.cpp stack.h
	g++ stack.cpp -o list_stack

shapes: shapes.cpp shapes.h
	g++ shapers.cpp -o shapes
