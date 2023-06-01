[ShowLinesMeasure4]
Measure=Plugin
Plugin= ActionTimer
ActionList1= Line1 | Line2 | Line3 | Line4 | Line5
Line1= [!CommandMeasure ShowSecondMeasure41 "Execute 1"]
Line2= [!CommandMeasure ShowSecondMeasure42 "Execute 1"]
Line3= [!CommandMeasure ShowSecondMeasure43 "Execute 1"]
Line4= [!CommandMeasure ShowSecondMeasure44 "Execute 1"]
Line5= [!CommandMeasure ShowSecondMeasure45 "Execute 1"]

[NumberTimeMeasure4]
Measure= Calc
Formula= [MinuteMeasure2]
DynamicVariables= 1

[IncludeLines4]
@includeLine41= Line1/Line.inc
@includeLine42= Line2/Line.inc
@includeLine43= Line3/Line.inc
@includeLine44= Line4/Line.inc
@includeLine45= Line5/Line.inc