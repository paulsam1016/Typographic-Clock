[IncludeLineStyles41]
@IncludeLineStyles41= @Resources/Styles.inc

[ShowSecondMeasure41]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond45"] 
Second2= [!UpdateMeasure "MeasureSecond50"] 
Second3= [!UpdateMeasure "MeasureSecond55"] 

[IncludeSeconds41]
@includeSeconds411= Seconds/Second1.inc
@includeSeconds412= Seconds/Second2.inc
@includeSeconds413= Seconds/Second3.inc