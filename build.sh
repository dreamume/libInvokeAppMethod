clang -c library.c
clang -shared -undefined dynamic_lookup -o libsample.dylib library.o
clang main.c libsample.dylib -o sample
./sample
