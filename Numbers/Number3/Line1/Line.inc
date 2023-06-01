[IncludeLineStyles31]
@IncludeLineStyles31= @Resources/Styles.inc

[ShowSecondMeasure31]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond30"] 
Second2= [!UpdateMeasure "MeasureSecond35"] 
Second3= [!UpdateMeasure "MeasureSecond40"] 

[IncludeSeconds31]
@includeSeconds311= Seconds/Second1.inc
@includeSeconds312= Seconds/Second2.inc
@includeSeconds313= Seconds/Second3.inc