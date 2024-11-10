#!/usr/bin/env python3
from subprocess import check_output
from random import sample

CHECKER="../checker"
CHECKER2="./checker_linux"
PUSH_SWAP="../push_swap"
INT_MIN = -2147483648
INT_MAX = 2147483647
# INT_MIN = 0
# INT_MAX = 600

len_args_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 25, 37, 46, 50, 51, 77, 99, 100, 101, 250, 499, 500, 501, 525, 540]
NUMBER_OF_RUNS = 50

def return_avg_max_from_instructions(instructions, max_instructions, avg_instructions):
	ins_list = instructions.split("\n")
	len_list = len(ins_list)
	if len_list > max_instructions:
		max_instructions = len_list
	return (max_instructions, avg_instructions + len_list)

def test_n_random_numbers(n: int):
	max_instructions_100 = 0
	avg_instructions_100 = 0
	# generate 100 each run random numbers
	i = 0
	while (i < NUMBER_OF_RUNS):
		numbers = [str(n) for n in sample(range(INT_MIN, INT_MAX+1), n)];

		instructions = check_output([PUSH_SWAP] + numbers).decode("utf-8")
		#print(instructions.decode("utf-8").split("\n"))
		max_instructions_100, avg_instructions_100 = return_avg_max_from_instructions(instructions, max_instructions_100, avg_instructions_100)
		instructions = "\n".join(instructions.split("\n"))
		#print(instructions)
		checked = check_output([CHECKER] + numbers, input = instructions.encode("utf-8"))
		# print(" ".join([CHECKER2] + numbers))
		checked2 = check_output([CHECKER2] + numbers, input = instructions.encode("utf-8"))
		# print(checked.decode("utf-8").strip(), checked2.decode("utf-8").strip())
		if(checked == b"OK\n" and checked2 == b"OK\n"):
			pass
			#print("OK")
		else:
			print(checked, checked2)
			print ("===============")
			print(" ".join(numbers));
			print ("===============")
		i += 1

	avg_instructions_100 = avg_instructions_100 / NUMBER_OF_RUNS
	print(f"instructions for {n} random numbers: max ", max_instructions_100, " and avg ", avg_instructions_100)

for i in len_args_list:
	test_n_random_numbers(i)