#!/bin/bash

COMMAND=~/expressions/expressions.py
OPTIONS=" -c cpp-10 "

PASS=0
FAIL=0
TOTAL=0

for dir in app/ kernel/ sequential/ test/; do

    cd "$dir"

    for BENCH in */; do
        cd "$BENCH"
        
        for C_FILE in *.c; do
            printf "Checking ${dir}${BENCH}${C_FILE} ... "
            $COMMAND $OPTIONS $C_FILE &>/dev/null
            RETURNVALUE=$(echo $?)
            if [ $RETURNVALUE -eq 0 ]; then
                printf "passed\n"
                ((PASS++))
            else
                printf "failed ($RETURNVALUE)\n"
                ((FAIL++))
                # exit
            fi
            ((TOTAL++))
        done
        
        printf "\n"
        cd ..
    done

    printf "\n"
    
    cd ..
done

echo "PASS: $PASS/$TOTAL"
echo "FAIL: $FAIL/$TOTAL"
