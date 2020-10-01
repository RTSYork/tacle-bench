#!/bin/bash

COMMAND=~/picoc/cmake-build-debug/picoc
OPTIONS="-d0xb"

for dir in app/ kernel/ sequential/ test/; do

    cd "$dir"

    for BENCH in */; do
        cd "$BENCH"
        printf "Generating expression counts for ${dir}${BENCH%/} ... "
        OUTPUT=$($COMMAND $OPTIONS *.c)
        RETURNVALUE=$(echo $?)
        if [ $RETURNVALUE -eq 0 ]; then
            echo "$OUTPUT" > ../../../stats/${BENCH%/}.exprchains.txt
            printf "ok\n"
        else
            printf "failed ($RETURNVALUE)\n"
            ((FAIL++))
            # exit
        fi
        
        cd ..
    done
    
    cd ..
done
