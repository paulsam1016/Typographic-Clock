[IncludeLineStyles21]
@IncludeLineStyles21= @Resources/Styles.inc

[ShowSecondMeasure21]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond15"] 
Second2= [!UpdateMeasure "MeasureSecond20"] 
Second3= [!UpdateMeasure "MeasureSecond25"] 

[IncludeSeconds21]
@includeSeconds211= Seconds/Second1.inc
@includeSeconds212= Seconds/Second2.inc
@includeSeconds213= Seconds/Second3.inc