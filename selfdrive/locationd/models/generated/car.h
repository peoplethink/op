#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_9185093780525838380);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_3289336464231069160);
void car_H_mod_fun(double *state, double *out_4264810542571615280);
void car_f_fun(double *state, double dt, double *out_7403786156969034234);
void car_F_fun(double *state, double dt, double *out_342423527874706288);
void car_h_25(double *state, double *unused, double *out_1631053330231334343);
void car_H_25(double *state, double *unused, double *out_4880147206531546864);
void car_h_24(double *state, double *unused, double *out_4578424325920081683);
void car_H_24(double *state, double *unused, double *out_1322221607729223728);
void car_h_30(double *state, double *unused, double *out_3081684722860217510);
void car_H_30(double *state, double *unused, double *out_2361814248024298237);
void car_h_26(double *state, double *unused, double *out_3921077980932848269);
void car_H_26(double *state, double *unused, double *out_8621650525405603088);
void car_h_27(double *state, double *unused, double *out_4667839381675667028);
void car_H_27(double *state, double *unused, double *out_7184249465475211845);
void car_h_29(double *state, double *unused, double *out_1919988544800628135);
void car_H_29(double *state, double *unused, double *out_8897612192344762878);
void car_h_28(double *state, double *unused, double *out_5611349234577329463);
void car_H_28(double *state, double *unused, double *out_6933981920779436627);
void car_h_31(double *state, double *unused, double *out_5139781896119016593);
void car_H_31(double *state, double *unused, double *out_9198885446070597052);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}