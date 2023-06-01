[ShowLinesMeasure2]
Measure=Plugin
Plugin= ActionTimer
ActionList1= Line1 | Line2 | Line3 | Line4 | Line5
Line1= [!CommandMeasure ShowSecondMeasure21 "Execute 1"]
Line2= [!CommandMeasure ShowSecondMeasure22 "Execute 1"]
Line3= [!CommandMeasure ShowSecondMeasure23 "Execute 1"]
Line4= [!CommandMeasure ShowSecondMeasure24 "Execute 1"]
Line5= [!CommandMeasure ShowSecondMeasure25 "Execute 1"]

[IncludeLines2]
@includeLine21= Line1/Line.inc
@includeLine22= Line2/Line.inc
@includeLine23= Line3/Line.inc
@includeLine24= Line4/Line.inc
@includeLine25= Line5/Line.inc