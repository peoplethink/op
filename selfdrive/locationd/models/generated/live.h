#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_950410083624595179);
void live_err_fun(double *nom_x, double *delta_x, double *out_5070616078715014862);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_1448714710135634966);
void live_H_mod_fun(double *state, double *out_7101956999604427729);
void live_f_fun(double *state, double dt, double *out_7295274525921038907);
void live_F_fun(double *state, double dt, double *out_5597165523372174827);
void live_h_4(double *state, double *unused, double *out_7477228488421993894);
void live_H_4(double *state, double *unused, double *out_2840763296901719911);
void live_h_9(double *state, double *unused, double *out_1528385482152805940);
void live_H_9(double *state, double *unused, double *out_4446455638362727559);
void live_h_10(double *state, double *unused, double *out_1264780663452593516);
void live_H_10(double *state, double *unused, double *out_8276798124579827726);
void live_h_12(double *state, double *unused, double *out_549662815530372494);
void live_H_12(double *state, double *unused, double *out_9222021673944452907);
void live_h_31(double *state, double *unused, double *out_8489684082737568701);
void live_H_31(double *state, double *unused, double *out_6476458641619439198);
void live_h_32(double *state, double *unused, double *out_4149987253198136316);
void live_H_32(double *state, double *unused, double *out_675154269411826640);
void live_h_13(double *state, double *unused, double *out_3621224806714370569);
void live_H_13(double *state, double *unused, double *out_5693726087509822149);
void live_h_14(double *state, double *unused, double *out_1528385482152805940);
void live_H_14(double *state, double *unused, double *out_4446455638362727559);
void live_h_33(double *state, double *unused, double *out_6325685026478982592);
void live_H_33(double *state, double *unused, double *out_7724259019964949722);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}