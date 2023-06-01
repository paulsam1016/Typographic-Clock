[IncludeLineStyles12]
@IncludeLineStyles12= @Resources/Styles.inc

[ShowSecondMeasure12]
Measure= Plugin
Plugin= ActionTimer
ActionList1= Second1 | Second2 | Second3
Second1= [!UpdateMeasure "MeasureSecond01"] 
Second2= [!UpdateMeasure "MeasureSecond06"] 
Second3= [!UpdateMeasure "MeasureSecond11"] 

[IncludeSeconds12]
@includeSeconds121= Seconds/Second1.inc
@includeSeconds122= Seconds/Second2.inc
@includeSeconds123= Seconds/Second3.inc