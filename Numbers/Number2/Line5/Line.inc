[IncludeLineStyles25]
@IncludeLineStyles25= @Resources/Styles.inc

[ShowSecondMeasure25]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond19"] 
Second2= [!UpdateMeasure "MeasureSecond24"] 
Second3= [!UpdateMeasure "MeasureSecond29"] 

[IncludeSeconds25]
@includeSeconds251= Seconds/Second1.inc
@includeSeconds252= Seconds/Second2.inc
@includeSeconds253= Seconds/Second3.inc