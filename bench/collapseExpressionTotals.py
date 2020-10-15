#!/usr/bin/env python3

import csv

expressions = dict()
counts = dict()
benchmark_counts = dict()

with open('results-expressiontotals.csv', newline='') as csvfile:
	csvreader = csv.DictReader(csvfile)
	for row in csvreader:
		hash_value = row['Expression hash']
		count = int(row['Count'])
		if hash_value not in expressions:
			expressions[hash_value] = row['Expression string']
			counts[hash_value] = count
			benchmark_counts[hash_value] = 1
		else:
			counts[hash_value] += count
			benchmark_counts[hash_value] += 1

with open('results-expressiontotals-collapsed.csv', 'w', newline='') as csvfile:
	csvwriter = csv.writer(csvfile)
	csvwriter.writerow(('Expression hash', 'Expression string', 'Total execution count', 'Benchmark usage'))
	for hash_value in expressions.keys():
		csvwriter.writerow((hash_value, expressions[hash_value], counts[hash_value], benchmark_counts[hash_value]))
