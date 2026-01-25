# Types of compilation
## Homework Task for 10.11.25
### There are three files: frstfile.cpp, scndfile.cpp, and thrdfile.cpp.
We compile them using the following commands: 
```
g++ -c frstfile.cpp
g++ -c scndfile.cpp
g++ -c thrdfile.cpp
```
### As a result, we obtain three object files: frstfile.o, scndfile.o, and thrdfile.o.
### To create the final executable program, I ran the following command:
```
g++ -c frstfile.o scndfile.o thrdfile.o -o finalprogram
```

