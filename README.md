# C-Learning

I am Learning C++ So, In this repo i will add Projects of C++
Which i will do while Learning along the way.

## Requirements page

for more info [here](./mannual/Building/index.md#requirements)

## Build ->

There are two ways to build the project:

### 1) With cmake ->

    mkdir build
    cmake -DCMAKE_BUILD_TYPE=Release # =Debug for debug
    cd build
    cmake --build .

### 2) Without cmake ->

If you don't have cmake for some reason then you can use my custom bash script to compile the program:

    apt install build-essential #dependencies
    chmod u+x compile.bash #for correct permission
    echo -e "1\nn\ny" | ./compile.bash #or just ./compile.bash to configure it yourself.
    ./main.out
