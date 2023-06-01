[IncludeLineStyles24]
@IncludeLineStyles24= @Resources/Styles.inc

[ShowSecondMeasure24]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond18"] 
Second2= [!UpdateMeasure "MeasureSecond23"] 
Second3= [!UpdateMeasure "MeasureSecond28"] 

[IncludeSeconds24]
@includeSeconds241= Seconds/Second1.inc
@includeSeconds242= Seconds/Second2.inc
@includeSeconds243= Seconds/Second3.inc