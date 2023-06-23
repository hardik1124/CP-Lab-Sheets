gcc -c student1.c
gcc -c student2.c
gcc -c student3.c
gcc -c checkAnswers.c
gcc -o exe1 checkAnswers.o student1.o
gcc -o exe2 checkAnswers.o student2.o
gcc -o exe3 checkAnswers.o student3.o
echo "Student1:"
./exe1
echo "Student2:"
./exe2
echo "Student3:"
./exe3
rm *.o