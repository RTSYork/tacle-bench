#!/bin/bash

COMMAND=~/picoc/cmake-build-debug/picoc
OPTIONS="-d0xd"

printf "Benchmark,Stack frames depth,Stack frame size (bytes),Cumulative stack size (bytes),Global variables,Global variables size (bytes)\n"

for dir in app/ kernel/ sequential/ test/; do

    cd "$dir"

    for BENCH in */; do
        cd "$BENCH"
        
        OUTPUT=$($COMMAND $OPTIONS *.c)
        RETURNVALUE=$(echo $?)
        if [ $RETURNVALUE -eq 0 ]; then
            printf "${dir%/}/${BENCH%/},${OUTPUT}\n"
        fi
        
        cd ..
    done
    
    cd ..
done
