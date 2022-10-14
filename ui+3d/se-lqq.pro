#-------------------------------------------------
#
# Project created by QtCreator 2020-12-22T11:07:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = se-lqq
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    Robot_Program_ui/install_set_ui/safe_setting.cpp \
    Robot_Program_ui/install_set_ui/safe_pasword.cpp \
    Robot_Program_ui/install_set_ui/high_limit.cpp \
    Robot_Program_ui/install_set_ui/joint_limit.cpp \
    Robot_Program_ui/install_set_ui/locat_range.cpp \
    Robot_Program_ui/install_set_ui/border.cpp \
    Robot_Program_ui/install_set_ui/tool_border_attr.cpp \
    Robot_Program_ui/install_set_ui/safe_io.cpp \
    welcome.cpp \
    Initialize_Ui/initialize_robot.cpp \
    Robot_Program_ui/install_set_ui/instruction_tcp_locate.cpp \
    Robot_Program_ui/install_set_ui/instruction_tcp_direction.cpp \
    Robot_Program_ui/install_set_ui/install.cpp \
    Robot_Program_ui/install_set_ui/io_setting.cpp \
    Robot_Program_ui/install_set_ui/variable_install.cpp \
    Robot_Program_ui/install_set_ui/modbus_io.cpp \
    Robot_Program_ui/install_set_ui/io_setting_output.cpp \
    Robot_Program_ui/install_set_ui/high_modbus_io.cpp \
    Robot_Program_ui/install_set_ui/default_program.cpp \
    Robot_Program_ui/Log_ui/log_base.cpp \
    Robot_Program_ui/program_ui/command_program.cpp \
    Robot_Program_ui/program_ui/command_point.cpp \
    Robot_Program_ui/program_ui/insert_program.cpp \
    Robot_Program_ui/program_ui/move_road_point.cpp \
    Robot_Program_ui/program_ui/variable_command.cpp \
    Robot_Program_ui/program_ui/wait_command.cpp \
    Robot_Program_ui/program_ui/setting_command.cpp \
    Robot_Program_ui/program_ui/pop_up_command.cpp \
    Robot_Program_ui/program_ui/interuption_command.cpp \
    Robot_Program_ui/program_ui/note_command.cpp \
    Robot_Program_ui/program_ui/folder_command.cpp \
    Robot_Program_ui/program_ui/circulate_command.cpp \
    Robot_Program_ui/program_ui/subprogram.cpp \
    Robot_Program_ui/program_ui/subthread.cpp \
    Robot_Program_ui/program_ui/valuation_command.cpp \
    Robot_Program_ui/program_ui/if_command.cpp \
    Robot_Program_ui/program_ui/script_command.cpp \
    Robot_Program_ui/program_ui/event_command.cpp \
    Robot_Program_ui/program_ui/thread_command.cpp \
    Robot_Program_ui/program_ui/switch_command.cpp \
    Robot_Program_ui/program_ui/model_command.cpp \
    Robot_Program_ui/program_ui/beforestart.cpp \
    Robot_Program_ui/program_ui/tray_command.cpp \
    Robot_Program_ui/program_ui/tray_sequ.cpp \
    Robot_Program_ui/program_ui/force_command.cpp \
    Robot_Program_ui/program_ui/exporation_type.cpp \
    Robot_Program_ui/program_ui/convery_command.cpp \
    Robot_Program_ui/program_ui/model_line.cpp \
    Robot_Program_ui/program_ui/tray_startlocat.cpp \
    Robot_Program_ui/program_ui/model_diamonds.cpp \
    Robot_Program_ui/program_ui/model_box.cpp \
    Robot_Program_ui/program_ui/model_table.cpp \
    Robot_Program_ui/program_ui/depalletize_command.cpp \
    Robot_Program_ui/program_ui/force_frame.cpp \
    Robot_Program_ui/program_ui/direction.cpp \
    Initialize_Ui/language.cpp \
    Initialize_Ui/password.cpp \
    Initialize_Ui/calibration.cpp \
    Initialize_Ui/network.cpp \
    Initialize_Ui/set_time.cpp \
    Initialize_Ui/uruap.cpp \
    Robot_Program_ui/install_set_ui/feature.cpp \
    Robot_Program_ui/install_set_ui/conveyor_settings.cpp \
    Robot_Program_ui/install_set_ui/ethernet_ip.cpp \
    Robot_Program_ui/install_set_ui/profinet_io.cpp \
    Robot_Program_ui/install_set_ui/load_save.cpp \
    Robot_Program_ui/Io_control_ui/robort.cpp \
    Robot_Program_ui/Io_control_ui/modbus.cpp \
    As_regards_Ui/version_form.cpp \
    Run_the_Program_Ui/run_form.cpp \
    Initialize_Ui/initial_form.cpp \
    Robot_Program_ui/program_ui/programme_form.cpp \
    Robot_Program_ui/Robort_move_ui/robot_main_move.cpp \
    Robot_Program_ui/program_ui/move_command.cpp \
    Robot_Program_ui/first_form.cpp \
    Initialize_Ui/set_tool_centerpoint.cpp \
    Initialize_Ui/set_locate_angel.cpp \
    Run_the_Program_Ui/form_border_blank.cpp \
    Robot_Program_ui/install_set_ui/install_form.cpp \
    Initialize_Ui/update_software.cpp

HEADERS += \
    Robot_Program_ui/install_set_ui/safe_setting.h \
    Robot_Program_ui/install_set_ui/safe_pasword.h \
    Robot_Program_ui/install_set_ui/high_limit.h \
    Robot_Program_ui/install_set_ui/joint_limit.h \
    Robot_Program_ui/install_set_ui/locat_range.h \
    Robot_Program_ui/install_set_ui/border.h \
    Robot_Program_ui/install_set_ui/tool_border_attr.h \
    Robot_Program_ui/install_set_ui/safe_io.h \
    welcome.h \
    Initialize_Ui/initialize_robot.h \
    Robot_Program_ui/install_set_ui/instruction_tcp_locate.h \
    Robot_Program_ui/install_set_ui/instruction_tcp_direction.h \
    Robot_Program_ui/install_set_ui/install.h \
    Robot_Program_ui/install_set_ui/io_setting.h \
    Robot_Program_ui/install_set_ui/variable_install.h \
    Robot_Program_ui/install_set_ui/modbus_io.h \
    Robot_Program_ui/install_set_ui/io_setting_output.h \
    Robot_Program_ui/install_set_ui/high_modbus_io.h \
    Robot_Program_ui/install_set_ui/default_program.h \
    Robot_Program_ui/Log_ui/log_base.h \
    Robot_Program_ui/program_ui/command_program.h \
    Robot_Program_ui/program_ui/command_point.h \
    Robot_Program_ui/program_ui/insert_program.h \
    Robot_Program_ui/program_ui/move_road_point.h \
    Robot_Program_ui/program_ui/variable_command.h \
    Robot_Program_ui/program_ui/wait_command.h \
    Robot_Program_ui/program_ui/setting_command.h \
    Robot_Program_ui/program_ui/pop_up_command.h \
    Robot_Program_ui/program_ui/interuption_command.h \
    Robot_Program_ui/program_ui/note_command.h \
    Robot_Program_ui/program_ui/folder_command.h \
    Robot_Program_ui/program_ui/circulate_command.h \
    Robot_Program_ui/program_ui/subprogram.h \
    Robot_Program_ui/program_ui/subthread.h \
    Robot_Program_ui/program_ui/valuation_command.h \
    Robot_Program_ui/program_ui/if_command.h \
    Robot_Program_ui/program_ui/script_command.h \
    Robot_Program_ui/program_ui/event_command.h \
    Robot_Program_ui/program_ui/thread_command.h \
    Robot_Program_ui/program_ui/switch_command.h \
    Robot_Program_ui/program_ui/model_command.h \
    Robot_Program_ui/program_ui/beforestart.h \
    Robot_Program_ui/program_ui/tray_command.h \
    Robot_Program_ui/program_ui/tray_sequ.h \
    Robot_Program_ui/program_ui/force_command.h \
    Robot_Program_ui/program_ui/exporation_type.h \
    Robot_Program_ui/program_ui/convery_command.h \
    Robot_Program_ui/program_ui/model_line.h \
    Robot_Program_ui/program_ui/tray_startlocat.h \
    Robot_Program_ui/program_ui/model_diamonds.h \
    Robot_Program_ui/program_ui/model_box.h \
    Robot_Program_ui/program_ui/model_table.h \
    Robot_Program_ui/program_ui/depalletize_command.h \
    Robot_Program_ui/program_ui/force_frame.h \
    Robot_Program_ui/program_ui/direction.h \
    Initialize_Ui/language.h \
    Initialize_Ui/password.h \
    Initialize_Ui/calibration.h \
    Initialize_Ui/network.h \
    Initialize_Ui/set_time.h \
    Initialize_Ui/uruap.h \
    Robot_Program_ui/install_set_ui/feature.h \
    Robot_Program_ui/install_set_ui/conveyor_settings.h \
    Robot_Program_ui/install_set_ui/ethernet_ip.h \
    Robot_Program_ui/install_set_ui/profinet_io.h \
    Robot_Program_ui/install_set_ui/load_save.h \
    Robot_Program_ui/Io_control_ui/robort.h \
    Robot_Program_ui/Io_control_ui/modbus.h \
    As_regards_Ui/version_form.h \
    Run_the_Program_Ui/run_form.h \
    Initialize_Ui/initial_form.h \
    Robot_Program_ui/program_ui/programme_form.h \
    Robot_Program_ui/Robort_move_ui/robot_main_move.h \
    Robot_Program_ui/program_ui/move_command.h \
    Robot_Program_ui/first_form.h \
    Initialize_Ui/set_tool_centerpoint.h \
    Initialize_Ui/set_locate_angel.h \
    Run_the_Program_Ui/form_border_blank.h \
    Robot_Program_ui/install_set_ui/install_form.h \
    Initialize_Ui/update_software.h \

FORMS += \
    Robot_Program_ui/install_set_ui/safe_setting.ui \
    Robot_Program_ui/install_set_ui/safe_pasword.ui \
    Robot_Program_ui/install_set_ui/high_limit.ui \
    Robot_Program_ui/install_set_ui/joint_limit.ui \
    Robot_Program_ui/install_set_ui/locat_range.ui \
    Robot_Program_ui/install_set_ui/border.ui \
    Robot_Program_ui/install_set_ui/tool_border_attr.ui \
    Robot_Program_ui/install_set_ui/safe_io.ui \
    welcome.ui \
    Initialize_Ui/initialize_robot.ui \
    Robot_Program_ui/install_set_ui/instruction_tcp_locate.ui \
    Robot_Program_ui/install_set_ui/instruction_tcp_direction.ui \
    Robot_Program_ui/install_set_ui/install.ui \
    Robot_Program_ui/install_set_ui/io_setting.ui \
    Robot_Program_ui/install_set_ui/variable_install.ui \
    Robot_Program_ui/install_set_ui/modbus_io.ui \
    Robot_Program_ui/install_set_ui/io_setting_output.ui \
    Robot_Program_ui/install_set_ui/high_modbus_io.ui \
    Robot_Program_ui/install_set_ui/default_program.ui \
    Robot_Program_ui/Log_ui/log_base.ui \
    Robot_Program_ui/program_ui/command_program.ui \
    Robot_Program_ui/program_ui/command_point.ui \
    Robot_Program_ui/program_ui/insert_program.ui \
    Robot_Program_ui/program_ui/move_road_point.ui \
    Robot_Program_ui/program_ui/variable_command.ui \
    Robot_Program_ui/program_ui/wait_command.ui \
    Robot_Program_ui/program_ui/setting_command.ui \
    Robot_Program_ui/program_ui/pop_up_command.ui \
    Robot_Program_ui/program_ui/interuption_command.ui \
    Robot_Program_ui/program_ui/note_command.ui \
    Robot_Program_ui/program_ui/folder_command.ui \
    Robot_Program_ui/program_ui/circulate_command.ui \
    Robot_Program_ui/program_ui/subprogram.ui \
    Robot_Program_ui/program_ui/subthread.ui \
    Robot_Program_ui/program_ui/valuation_command.ui \
    Robot_Program_ui/program_ui/if_command.ui \
    Robot_Program_ui/program_ui/script_command.ui \
    Robot_Program_ui/program_ui/event_command.ui \
    Robot_Program_ui/program_ui/thread_command.ui \
    Robot_Program_ui/program_ui/switch_command.ui \
    Robot_Program_ui/program_ui/model_command.ui \
    Robot_Program_ui/program_ui/beforestart.ui \
    Robot_Program_ui/program_ui/tray_command.ui \
    Robot_Program_ui/program_ui/tray_sequ.ui \
    Robot_Program_ui/program_ui/force_command.ui \
    Robot_Program_ui/program_ui/exporation_type.ui \
    Robot_Program_ui/program_ui/convery_command.ui \
    Robot_Program_ui/program_ui/model_line.ui \
    Robot_Program_ui/program_ui/tray_startlocat.ui \
    Robot_Program_ui/program_ui/model_diamonds.ui \
    Robot_Program_ui/program_ui/model_box.ui \
    Robot_Program_ui/program_ui/model_table.ui \
    Robot_Program_ui/program_ui/depalletize_command.ui \
    Robot_Program_ui/program_ui/force_frame.ui \
    Robot_Program_ui/program_ui/direction.ui \
    Initialize_Ui/language.ui \
    Initialize_Ui/password.ui \
    Initialize_Ui/calibration.ui \
    Initialize_Ui/network.ui \
    Initialize_Ui/set_time.ui \
    Initialize_Ui/uruap.ui \
    Robot_Program_ui/install_set_ui/feature.ui \
    Robot_Program_ui/install_set_ui/conveyor_settings.ui \
    Robot_Program_ui/install_set_ui/ethernet_ip.ui \
    Robot_Program_ui/install_set_ui/profinet_io.ui \
    Robot_Program_ui/install_set_ui/load_save.ui \
    Robot_Program_ui/Io_control_ui/robort.ui \
    Robot_Program_ui/Io_control_ui/modbus.ui \
    Run_the_Program_Ui/run_form.ui \
    As_regards_Ui/version_form.ui \
    Initialize_Ui/initial_form.ui \
    Robot_Program_ui/program_ui/programme_form.ui \
    Robot_Program_ui/Robort_move_ui/robot_main_move.ui \
    Robot_Program_ui/program_ui/move_command.ui \
    Robot_Program_ui/first_form.ui \
    Initialize_Ui/set_tool_centerpoint.ui \
    Initialize_Ui/set_locate_angel.ui \
    Run_the_Program_Ui/form_border_blank.ui \
    Robot_Program_ui/install_set_ui/install_form.ui \
    Initialize_Ui/update_software.ui \

SUBDIRS += \
    se-lqq.pro \

DISTFILES += \
    DEBUG/imagic/xz.png \
    DEBUG/imagic/xz.png \
    DEBUG/imagic/xy.png \
    DEBUG/imagic/help.png \
    DEBUG/imagic/help-2.png \
    DEBUG/imagic/plus.png \
    DEBUG/imagic/black_point.png \
    DEBUG/imagic/status_light.png \
    DEBUG/imagic/状态灯.png \
    DEBUG/imagic/exit.png \
    DEBUG/imagic/load.png \
    DEBUG/imagic/speed.png \
    DEBUG/imagic/left-speed.png \
    DEBUG/imagic/play.png \
    DEBUG/imagic/pause.png \
    DEBUG/imagic/C.png \
    DEBUG/imagic/放大镜 .png \
    DEBUG/imagic/缩小.png \
    DEBUG/imagic/gray_up_fade_in.png \
    DEBUG/imagic/grey_down_fade_in.png \
    DEBUG/imagic/grey_left_fade_in.png \
    DEBUG/imagic/upward.png \
    DEBUG/imagic/downward.png \
    DEBUG/imagic/down_arrow_green.png \
    DEBUG/imagic/leftward.png \
    DEBUG/imagic/rightward.png \
    DEBUG/imagic/no.png \
    DEBUG/imagic/no-circle.png \
    DEBUG/imagic/warning.png \
    DEBUG/imagic/save.png \
    DEBUG/imagic/safe.png \
    DEBUG/imagic/refresh.png \
    DEBUG/imagic/brown-point.png \
    DEBUG/imagic/ernier.png \
    DEBUG/imagic/grey_vernier.png \
    DEBUG/imagic/blue_vernier.png \
    DEBUG/imagic/e yes.png \
    DEBUG/imagic/green_btn.png \
    DEBUG/imagic/sta_reduce.png \
    DEBUG/imagic/reduce.png \
    DEBUG/imagic/search.png \
    DEBUG/imagic/back.png \
    DEBUG/imagic/go.png \
    DEBUG/imagic/two-way.png
