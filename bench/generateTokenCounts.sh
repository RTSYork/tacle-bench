#!/bin/bash

COMMAND=~/picoc/cmake-build-debug/picoc
OPTIONS="-d3"

printf "Benchmark,"
$COMMAND -t

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
