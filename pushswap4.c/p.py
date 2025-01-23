# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    p.py                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 17:25:36 by omaezzem          #+#    #+#              #
#    Updated: 2025/01/23 17:25:38 by omaezzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import random
import subprocess

n = int(input("number of numbers -> "))
nn = int(input("number of max -> "))

for j in range(10**5):
    print("->", j)
    # Use a set for efficient unique number generation
    lst = set()
    while len(lst) < n:
        aid = random.randint(-1, 900000000)
        lst.add(aid)
    text = "./push_swap " + " ".join(map(str, lst)) + " | wc -l"
    result = subprocess.run(text, shell=True, capture_output=True, text=True)
    # print(True)
    try:
        output = int(result.stdout.strip())
        if output >= nn:
            print(True)
            print(result.stdout)
            print(text)
            break
    except ValueError:
        print("Error in command output:", result.stdout)