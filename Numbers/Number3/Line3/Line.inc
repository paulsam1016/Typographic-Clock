[IncludeLineStyles33]
@IncludeLineStyles33= @Resources/Styles.inc

[ShowSecondMeasure33]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond32"] 
Second2= [!UpdateMeasure "MeasureSecond37"] 
Second3= [!UpdateMeasure "MeasureSecond42"] 

[IncludeSeconds33]
@includeSeconds331= Seconds/Second1.inc
@includeSeconds332= Seconds/Second2.inc
@includeSeconds333= Seconds/Second3.inc