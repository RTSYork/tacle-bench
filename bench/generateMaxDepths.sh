#!/bin/bash

COMMAND=~/picoc/cmake-build-debug/picoc
OPTIONS="-d6"

printf "Benchmark,Function call depth,Loop depth,Conditional depth,Expression chain depth,Stack frames depth\n"

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
