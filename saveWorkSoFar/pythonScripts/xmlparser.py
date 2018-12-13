from __future__ import print_function
import xml.etree.ElementTree as ET

def toSDFConvention(name) :
    return "a" + str(int(name)-1)

input = open('graph.txt.part.2','r')
output = open ('graphdist.xml','w')
root = ET.Element('Root')
i = 0
for line in input :

    ET.SubElement(root , 'Element' , attrib = {'process' : str('a' + str(i))  , 'processor' : line[0]})
    i = i +1

output.write(ET.tostring(root, encoding="us-ascii", method="xml"))
output.close()
