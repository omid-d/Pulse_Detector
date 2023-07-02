# HDL Coder Downstream Integration Tcl Script

set myTool "Xilinx Vivado 2018.2"
set myProject "Pulse_Detector_vivado"
set myProjectFile "Pulse_Detector_vivado.xpr"
set myTopLevelEntity "Pulse_Detector"
set Family "Zynq"
set Device "xc7z035"
set Package "fbg676"
set Speed "-1"
set MapTimePathNumber "3"
set MapTimeAdvAnalysis "True"
set PARTimePathNumber "3"
set PARTimeAdvAnalysis "True"

if { ! [ file exists $myProjectFile ] } {
    # Create new project
    puts "### Create new $myTool project <a href=\"matlab:downstream.handle('Model','pulse_detector_v4').openTargetTool;\">hdl_prj\\vivado_prj\\Pulse_Detector_vivado.xpr</a>"
    create_project $myProject -force

} else {
    # Open existing project
    puts "### Open existing $myTool project <a href=\"matlab:downstream.handle('Model','pulse_detector_v4').openTargetTool;\">hdl_prj\\vivado_prj\\Pulse_Detector_vivado.xpr</a>"
    open_project ${myProject}

    # Remove Old HDL source files
    set files_to_delete [get_files]
      if { [llength $files_to_delete] > 0 } {
        remove_files [get_files]
      }

}

# Set project properties
puts "### Set $myTool project properties"
if { [string compare -nocase $Family "virtexu"] == 0 || [string compare -nocase $Family "kintexu"] == 0  || [string match -nocase "*ultrascale*" $Family] == 1 } {
     set_property PART $Device [current_project]
} else {
     set_property PART ${Device}${Package}${Speed} [current_project]
}

# Add HDL source files
puts "### Update $myTool project with HDL source files"
add_file \
    {../hdlsrc/pulse_detector_v4/Compute_Power.v} \
    {../hdlsrc/pulse_detector_v4/MATLAB_Function.v} \
    {../hdlsrc/pulse_detector_v4/Local_Peak.v} \
    {../hdlsrc/pulse_detector_v4/FilterCoef.v} \
    {../hdlsrc/pulse_detector_v4/FilterCoef_block.v} \
    {../hdlsrc/pulse_detector_v4/FilterCoef_block1.v} \
    {../hdlsrc/pulse_detector_v4/FilterTapSystolicWvldin.v} \
    {../hdlsrc/pulse_detector_v4/subFilter.v} \
    {../hdlsrc/pulse_detector_v4/Filter.v} \
    {../hdlsrc/pulse_detector_v4/Discrete_FIR_Filter.v} \
    {../hdlsrc/pulse_detector_v4/Pulse_Detector.v} \
{../hdlsrc/pulse_detector_v4/clock_constraint.xdc} \
  
update_compile_order -fileset sources_1
foreach fs [get_files *.tcl] {
source $fs
}

set_property {STEPS.SYNTH_DESIGN.ARGS.MORE OPTIONS} -value {-mode out_of_context} -objects [get_runs synth_1]
# Close project
puts "### Close $myTool project."
close_project

