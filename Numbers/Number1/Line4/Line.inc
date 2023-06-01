[IncludeLineStyles14]
@IncludeLineStyles14= @Resources/Styles.inc

[ShowSecondMeasure14]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond03"] 
Second2= [!UpdateMeasure "MeasureSecond08"] 
Second3= [!UpdateMeasure "MeasureSecond13"] 

[IncludeSeconds14]
@includeSeconds141= Seconds/Second1.inc
@includeSeconds142= Seconds/Second2.inc
@includeSeconds143= Seconds/Second3.inc