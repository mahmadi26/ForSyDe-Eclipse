from __future__ import print_function
import xml.etree.ElementTree as etree

def printFunc ( name, outPorts, inPorts, execTime ) :
    if ( outPorts == 0 and inPorts >= 1 ) :
        printFuncCase1 ( name, outPorts, inPorts, execTime )
    if ( outPorts == 1 and inPorts >= 1 ) :
        printFuncCase2 ( name, outPorts, inPorts, execTime )
    if ( outPorts > 1 and inPorts >= 1 ) :
        printFuncCase3 ( name, outPorts, inPorts, execTime )
    if ( outPorts == 1 and inPorts == 0 ) :
        printFuncCase4 ( name, outPorts, inPorts, execTime )
    if ( outPorts > 1 and inPorts == 0 ) :
        printFuncCase5 ( name, outPorts, inPorts, execTime )

def printFuncCase1 ( name, outPorts, inPorts, execTime ) : 
    output1 = open ( name + '_func.hpp', 'w' )
    output1.write (' void ' + name + '_func' (const vector<[p.dataType/]>& inp[lp.ports -> filter(InputPort)->indexOf(p)/][/for])
# {
# 	for ( int j = 0 ; j< iteration_size ; j++ ) 
# 	{
# 		for (int i=0 ; i < 10 ; i++ )
# 		{	 
# 			int j ; 
# 			j = i % 3 ; 
# 			j = j*2 ; 
# 			out1['['/]0[']'/] = {inp1['['/]0[']'/]['['/]0[']'/] + j} ;
# 		}
# 	}
# })
def printFuncCase2 ( name, outPorts, inPorts, execTime ) : 
    output = open ( name + '_func.hpp', 'w' )
def printFuncCase3 ( name, outPorts, inPorts, execTime ) : 
    output = open ( name + '_func.hpp', 'w' )
def printFuncCase4 ( name, outPorts, inPorts, execTime ) : 
    output = open ( name + '_func.hpp', 'w' )
def printFuncCase5 ( name, outPorts, inPorts, execTime ) : 
    output = open ( name + '_func.hpp', 'w' )


##########################################################################################
# [comment Including the functionality of leaf processes which do not need changing to one output form if has a function argument /]
# [for (lp : LeafProcess | pn.processes -> filter(LeafProcess))]
# [if (not ((lp.processConstructor.name = 'sender') or (lp.processConstructor.name = 'receiver') or 
# 		  (lp.processConstructor.name = 'unzipN') or (lp.processConstructor.name = 'delayn') or (lp.name.endsWith('unzip')) or ((lp.name.lastIndexOf('_')) = 0) ))] 
# [if (lp.constructorArguments->select(ca | ca.name = '_func')->first().value.lastIndex('oneOutput') = -1)]
# void [lp.name/]_func(vector<array<int,1>>& out1[for(p : InputPort | lp.ports -> filter(InputPort))],const vector<[p.dataType/]>& inp[lp.ports -> filter(InputPort)->indexOf(p)/][/for])
# {
# 	for ( int j = 0 ; j< iteration_size ; j++ ) 
# 	{
# 		for (int i=0 ; i < 10 ; i++ )
# 		{	 
# 			int j ; 
# 			j = i % 3 ; 
# 			j = j*2 ; 
# 			out1['['/]0[']'/] = {inp1['['/]0[']'/]['['/]0[']'/] + j} ;
# 		}
# 	}
# }

# [/if] 
# [/if]
# [/for]

# [comment Including the functionality of leaf processes which Do need changing to one output form if has a function argument /]

# [for (cp : CompositeProcess | pn.processes -> filter(CompositeProcess))]
# [for (lp : LeafProcess | cp.component.processes->filter(LeafProcess)->flatten())]
# [if (not ((lp.processConstructor.name = 'sender') or (lp.processConstructor.name = 'receiver') or 
# 		  (lp.processConstructor.name = 'unzipN') or (lp.processConstructor.name = 'delayn') or (lp.name.endsWith('unzip')) or ((lp.name.lastIndexOf('_')) = 0) ))] 
# [if (not (lp.constructorArguments->select(ca | ca.name = '_func')->first().value.lastIndex('oneOutput') = -1))]
# typedef tuple<vector<[cp.ports -> filter(OutputPort)->first().dataType/]>[for( p : OutputPort | cp.ports -> filter(OutputPort)->excluding(cp.ports -> filter(OutputPort)->first()))],vector<[p.dataType/]>[/for]> tupint[cp.ports -> filter(OutputPort)->size().toString()/]_[pn.processes->indexOf(cp)/];

# void [lp.name/]_func(vector<tupint[cp.ports -> filter(OutputPort)->size().toString()/]_[pn.processes->indexOf(cp)/]>& out1[for(p : InputPort | lp.ports -> filter(InputPort))],const vector<[p.dataType/]>& inp[lp.ports -> filter(InputPort)->indexOf(p)/][/for])
# {
# [for( op : OutputPort | cp.ports -> filter(OutputPort))]
# vector<[op.dataType/]> ret[cp.ports -> filter(OutputPort)->indexOf(op)-1/](1) ;
# [/for]
# for ( int j = 0 ; j < iteration_size ; j++ ) 
# {
# 	for (int i=0 ; i < 10 ; i++ )
# 		{
# 			int j ; 
# 			j = i % 3 ; 
# 			j = j*2 ; 
# 			[for( op : OutputPort | cp.ports -> filter(OutputPort))]
# 			ret[cp.ports -> filter(OutputPort)->indexOf(op)-1/]['['/]0[']'/] = {j} ; 
# 			[/for]
# 		}
# }
# out1['['/]0[']'/] = make_tuple(ret0[for(op : OutputPort | cp.ports -> filter(OutputPort)->excluding(cp.ports->filter(OutputPort)->first()))],ret[cp.ports -> filter(OutputPort)->indexOf(op)-1/][/for]);
# }
# [/if] 
# [/if]
# [/for]
# [/for]

##########################################################################################
tree = ET.parse('output.xml')
root = tree.getroot()
nodeNumber = 0
channelNumber = 0
for actor in root.iter('actor') :
    outPorts = 0 
    inPorts = 0 
    for port in actor.iter('port') :
        if ( port.get( 'type' ) == 'out' ) : 
            outPorts = outPorts + 1
        else : 
            inPorts = inPorts + 1
    for actorProperties in root.iter('actorProperties') : 
        if ( actorProperties.get('actor') == actor.get('name') ) : 
            execTime = actorProperties.find('executionTime').get('time')
    printFunc ( actor.get('name'), outPorts, inPorts, execTime )  
