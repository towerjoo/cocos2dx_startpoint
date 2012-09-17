import sys, os
import argparse
import shutil
parser = argparse.ArgumentParser(description="rename the project")

parser.add_argument('--from', '-f', dest='fromarg', help="current project's name")
parser.add_argument('--to', '-t', dest='toarg', help="project name to change to")

args = parser.parse_args()

fromarg = args.fromarg
toarg = args.toarg

ROOT_PATH = os.path.abspath(os.path.dirname(__file__))

def handle_file(cpath, fromstr, tostr):
    print "%s is processed" % cpath
    fh = open(cpath)
    cont = fh.read()
    fh.close()
    cont = cont.replace(fromstr, tostr)
    fh = open(cpath, "w")
    fh.write(cont)
    fh.close()
    

def handle(path, fromstr, tostr):
    for f in os.listdir(path):
        cpath = os.path.join(path, f)
        if os.path.isdir(cpath):
            handle(cpath, fromstr, tostr)
        else:
            handle_file(cpath, fromstr, tostr)

if fromarg == toarg:
    print "from name and to name can't be same!"
    sys.exit(0)
    

if fromarg and toarg:
    for file in os.listdir(ROOT_PATH):
        if os.path.isdir(file) and file == fromarg:
            shutil.move(fromarg, toarg)
            curdir = os.path.join(ROOT_PATH, toarg)
            handle(curdir, fromarg, toarg)
        elif file == "%s.xcodeproj" % fromarg:
            tofile = "%s.xcodeproj" % toarg
            shutil.move(file, tofile)
            curdir = os.path.join(ROOT_PATH, tofile)
            handle(curdir, fromarg, toarg)
    
else:
    parser.print_help()
    sys.exit(0)
    
    

