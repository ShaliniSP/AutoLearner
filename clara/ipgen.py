import sys
import subprocess
import re
import argparse

from itertools import permutations
import functools

def get_inner(nested, count = 0):
    if all(type(x) == list for x in nested):
        return sum(map(get_inner, nested), [])
    return nested

def add_paren(ip, depth):
	for i in range(depth):
		ip = [ip]
	return ip

def permute_ip(ip):
	# print(list(permutations(ip)))
	new_ip = []
	#print(ip)
	#ip = get_inner(ip)
	depth = lambda L: isinstance(L, list) and max(map(depth, L))+1
	d = depth(ip)
	for i in ip:
		i = get_inner(i)
		#print(i)
		# i = add_paren(i, d-1)
		# print(i)
		if type(i) == list:
			#print("list")
			new_ip+=list(permutations(i))
			#print("new_ip", new_ip)



	return [add_paren(i, d-1) for i in new_ip]

# ip = [[[4.5]], [[1.0, 3.0, 5.0]]]
# ip = permute_ip(ip) 
# print("IP", ip)