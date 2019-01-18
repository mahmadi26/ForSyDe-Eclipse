from __future__ import print_function
import xml.etree.ElementTree as ET


output = open ('graphdist27final.xml','w')
tree1 = ET.parse('27.xml')
root1 = tree1.getroot()
tree2 = ET.parse('graphdist.xml')
root2 = tree2.getroot()
for channel in root1.iter('channel') : 
	if 'initialTokens' in channel.attrib : 
		for element in root2.iter('Element') :
			if (str(element.attrib['process']) == str(channel.attrib['srcActor'])) : 
				source = element.attrib['processor']
		output.write('<Element process = \"delay' + channel.attrib['name'] + '\"' + '  processor = \"' + source + '\" />' +'\n') 
output.close()
