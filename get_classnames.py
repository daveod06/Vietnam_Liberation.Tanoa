import re

fname='classnames.txt'
#prefixes = ['type="C_','type="UNS_','type="uns_','type="pook_','type="POOK_','type="CSJ_']
prefixes = ['type="C_','type="UNS_','type="uns_','type="pook_','type="POOK_','type="CSJ_']
classes = []

with open(fname) as f:
    content = f.readlines()
    for line in content:
        for prefix in prefixes:
            if prefix in line:
                print(line)
                result = re.search('type="(.*)"',line)
                print(result.group(1))
                classes.append(result.group(1))
    classes = list(set(classes))
    classes = sorted(classes)
f.close()
#print(classes)

for _class in classes:
    print('"' + _class + '",')
