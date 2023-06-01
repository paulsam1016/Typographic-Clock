[ShowLinesMeasure1]
Measure=Plugin
Plugin= ActionTimer
ActionList1= Line1 | Line2 | Line3 | Line4 | Line5
Line1= [!CommandMeasure ShowSecondMeasure11 "Execute 1"]
Line2= [!CommandMeasure ShowSecondMeasure12 "Execute 1"]
Line3= [!CommandMeasure ShowSecondMeasure13 "Execute 1"]
Line4= [!CommandMeasure ShowSecondMeasure14 "Execute 1"]
Line5= [!CommandMeasure ShowSecondMeasure15 "Execute 1"]

[NumberTimeMeasure1]
Measure= Calc
Formula= [HourMeasure1]
DynamicVariables= 1

[IncludeLines1]
@includeLine11= Line1/Line.inc
@includeLine12= Line2/Line.inc
@includeLine13= Line3/Line.inc
@includeLine14= Line4/Line.inc
@includeLine15= Line5/Line.inc