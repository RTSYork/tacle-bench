#!/bin/bash

COMMAND=~/picoc/cmake-build-debug/picoc
OPTIONS="-d0xe"

printf "Expression hash,Count,Expression string\n"

for dir in app/ kernel/ sequential/ test/; do

    cd "$dir"

    for BENCH in */; do
        cd "$BENCH"
        
        OUTPUT=$($COMMAND $OPTIONS *.c)
        RETURNVALUE=$(echo $?)
        if [ $RETURNVALUE -eq 0 ]; then
            echo "${OUTPUT}"
        fi
        
        cd ..
    done
    
    cd ..
done
