import argparse
parser=argparse.ArgumentParser(
    description='this a name'
)
parser.add_argument(
"-n","--name",metavar='name',
required=True,help="Enter Your Name :"
)
args=parser.parse_args()
print("Your name :",args.name)