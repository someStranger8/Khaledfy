
clean:
    rm -rf ./build/*

install:
    mkdir build
    gcc -o ./build/khaledfy ./src/khaledfy.c
    sudo cp ./build/khaledfy /bin/
