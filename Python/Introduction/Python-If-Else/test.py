value = int(input());

if((value%2 == 0) and (value in range(2, 5))):
    print("Not Weird");
elif((value%2 == 0) and (value in range(6, 20))):
    print("Weird");
elif((value%2 == 0) and (value > 20)): 
    print("Not Weird");
else:
    print("Weird");