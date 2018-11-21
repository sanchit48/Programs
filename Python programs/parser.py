import argparse
parser=argparse.ArgumentParser()
parser.add_argument("nums",nargs='*')
#parser.add_argument("b",type=float,help="input second number")
args=parser.parse_args()
result=float(args.nums[0])+float(args.nums[1])
print("sum of the numbers is:",result)
