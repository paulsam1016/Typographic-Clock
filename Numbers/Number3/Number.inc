[ShowLinesMeasure3]
Measure=Plugin
Plugin= ActionTimer
ActionList1= Line1 | Line2 | Line3 | Line4 | Line5
Line1= [!CommandMeasure ShowSecondMeasure31 "Execute 1"]
Line2= [!CommandMeasure ShowSecondMeasure32 "Execute 1"]
Line3= [!CommandMeasure ShowSecondMeasure33 "Execute 1"]
Line4= [!CommandMeasure ShowSecondMeasure34 "Execute 1"]
Line5= [!CommandMeasure ShowSecondMeasure35 "Execute 1"]

[NumberTimeMeasure3]
Measure= Calc
Formula= [MinuteMeasure1]
DynamicVariables= 1

[IncludeLines3]
@includeLine31= Line1/Line.inc
@includeLine32= Line2/Line.inc
@includeLine33= Line3/Line.inc
@includeLine34= Line4/Line.inc
@includeLine35= Line5/Line.inc