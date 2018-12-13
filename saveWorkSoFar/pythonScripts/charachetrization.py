   input = open('graph.txt.part.2','r')
output = open ('graphdist.xml','w')
root = ET.Element('Root')
i = 0
for line in input :

    ET.SubElement(root , 'Element' , attrib = {'process' : str('a' + str(i))  , 'processor' : line[0]})
    i = i +1

output.write(ET.tostring(root, encoding="us-ascii", method="xml"))
output.close()
output.write("M = 4 ;" + "\n")
output.write("N = " + str(nodeNumber) + ';' + " \n")
exectimeStr = ""
for act in root.iter('actor') :
    edgedict = {}
    exectime = "0"
    for actprop in root.iter('actorProperties') :
        if act.attrib["name"] == actprop.attrib["actor"] :
            exectime = actprop[0][0].attrib['time']
    exectimeStr = exectimeStr + str(exectime) + ","
if exectimeStr.endswith(','):
    exectimeStr = exectimeStr[:-1]
(channel.attrib['dstActor'] == channels.attrib['dstActor'])) :
                secondSize = 0
                firstSize = 0
                for chp in root.iter('channelProperties') :
                     if (chp.attrib["channel"] == channels.attrib["name"]) :
                         secondSize = int(chp.find("tokenSize").attrib["sz"])
                         root[0][1].remove(chp)
                     if (chp.attrib["channel"] == channel.attrib["name"]) :
                         firstSize = int(chp.find("tokenSize").attrib["sz"])
                for chp in root.iter('channelProperties') :
                    if (chp.attrib["channel"] == channel.attrib["name"]) :
                        chp.find("tokenSize").set("sz",str(firstSize+secondSize))
                        root[0][0].remove(channels)


for actor in root.iter('actor') :
    nodeNumber = nodeNumber + 1

for channel in root.iter('channel') :
    if not (channel.attrib['srcActor'] == channel.attrib['dstActor']) :
        channelNumber = channelNumber + 1

output.write(str(nodeNumber) + " " + str(channelNumber) + " " + "011" + '\n')
#print (str(nodeNumber) + " " + str(channelNumber) + " " + "011")

for actor in root.iter('actor') :
    edgedict = {}
    exectime = "0"
    for actprop in root.iter('actorProperties') :
        if actor.attrib["name"] == actprop.attrib["actor"] :
            exectime = actprop[0][0].attrib['time']
    for channel in root.iter('channel') :
        if not (channel.attrib['srcActor'] == channel.attrib['dstActor']) :
            if channel.attrib['srcActor'] == actor.attrib['name'] :
                for chprop in root.iter('channelProperties') :
                    if chprop.attrib['channel'] == channel.attrib['name'] :
                        edgedict[printnode(channel.attrib['dstActor'])] = chprop.find('tokenSize').attrib['sz']
            if channel.attrib['dstActor'] == actor.attrib['name'] :
                for chprop in root.iter('channelProperties') :
                    if chprop.attrib['channel'] == channel.attrib['name'] :
                        edgedict[printnode(channel.attrib['srcActor'])] = chprop.find('tokenSize').attrib['sz']
    output.write(exectime + " ")
    #print (exectime + " ",end='')
    for key,val in edgedict.items() :
        output.write(key + " " + val + ' ')
    output.write('\n')
        #print (key + " " + val + ' ',end = '')
    #print ('\n',end='')
output.close()
