#!/bin/bash

./generateTokenCounts.sh > results-tokens.csv
./generateParameterCounts.sh > results-functionparams.csv
./generateDynamicParameterCounts.sh > results-functionparamsdynamic.csv
./generateWatermarks.sh > results-watermarks.csv
./generateAssignmentCounts.sh > results-assignments.csv
