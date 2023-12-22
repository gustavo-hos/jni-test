# JNI Integration Test

## Project Intent

This project is primarily a testing ground for exploring the integration between Java and C++ using JNI (Java Native Interface). The primary goal is to gain practical experience and understanding of how these two languages can work together seamlessly.

### Project Purpose

- **JNI Exploration**: The focus of this project is to delve deep into the intricacies of JNI. We aim to understand the nuances of connecting Java and C++ code effectively.

- **Testing and Experimentation**: This project serves as a space for experimentation and testing. It's a playground where we can try out various JNI concepts, methods, and best practices.

### Commands Used

To generate the necessary header file and .so (shared object) file for this project, the following commands were used:

1. Generating Header File (`main.h`):
   ```bash
   javac -h . main.java

2. Compiling C++ Code to Create .so File:
   ```bash
   gcc -I/Library/Java/JavaVirtualMachines/adoptopenjdk-11.jdk/Contents/Home/include \
    -I/Library/Java/JavaVirtualMachines/adoptopenjdk-11.jdk/Contents/Home/include/darwin/ \
    -arch x86_64 -o libfirst.so main.cpp