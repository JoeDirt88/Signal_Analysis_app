#pragma once
#include <complex>
#include <math.h>
#include <algorithm> 
#include <limits>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
using std::vector;

#define Sps 10000
/* INSTRUCTIONS =========================================================================================================================
Assignment 2: (23689293 UNEVEN DIGITAL LAST NUMBER)
•	Using the bilinear transformation design a digital elliptic bandstop filter operating at a sampling rate of 9 kHz with
the following specifications: passband edges at 0.19 kHz and 4.2 kHz, stopband edges at 2.5 kHz and 3.3 kHz, peak passband
ripple of 1.2dB, and minimum stopband attenuation of 35 dB.
•	Display the frequency response (magnitude and phase) of the designed filter in the analog domain.
•	Display the frequency response (magnitude and phase) of the designed filter in the digital domain.
•	Realize the designed filter twice making use of two different digital filter structures.
•	Generate a digital input signal with frequencies up to 4.5 kHz.
•	Determine the output of both realizations of the digital filter for the specified input signal.
•	Display and compare the input and output signals, for both realizations of the digital filter, in the time domain.pbe
•	Display and compare the input and output signals, for both realizations of the digital filter, in the frequency domain.
=======================================================================================================================================*/

/* VARIABLES AND FORMULAE================================================================================================================
5 STEPS IN PROCESS:
step 1:		get analog, pre-warped frequencies
step 2:		convert to low-pass prototype estimate
step 3:	a	Get N-th order elliptic lowpass analog prototype
b	Transform to state-space
step 4:		Transform to lowpass, bandpass, highpass, or bandstop of desired Wn
step 5: a	Use Bilinear transformation to find discrete equivalent:
b	Transform to zero-pole-gain and polynomial forms:
=======================================================================================================================================*/

extern int					mul, FFTsize;
extern complex<double>		w_csn_E[10], w_ccd_E[10], 
							numC, denC, T, Z, 
							numsC, densC, Ts, S, 
							z_ap[10], p_ap[10];
extern double				pi, kilo, fs, pbel, pbeh, sbel, sbeh, ppr, msba, dif, Sigp, Sigs, Oc, OT,N,
							Omp1, Omp2, Oms1, Oms2, OMp1, OMp2, OMs1, OMs2, Bwp, Omp0Q, Bws, Oms0Q, Os,
							Op1m, Op1mQ, Op, Fp1, Fp2, Fs1, Fs2, c, wpa, ws1, ws2, wsa,num[5], den[5],
							WA, epsilon, k1, k, ellipK1, ellipK2, ellipK11, ellipK12, nums[5], dens[5],
							capk1, capk2, capk11, capk12, OO, wn1, wn2, kret, e,
							FFT_O_r, FFT_O_i, FFT_D_r, FFT_D_i, FFT_C_r, FFT_C_i, 
							w_sn_E[10], w_cd_E[10], Ks[10], v[10], k_ap, 
							gCAN, bCAN1[], fCAN1[], bCAN2[], fCAN2[], datArr[];
extern vector<double>		magT, phaT, phaT_nowrap, TF,
							magTs, phaTs, phaTs_nowrap, TFs,
							Origin, axX, axY, pointN,
							X1st, X2nd, X3rd, X4th, canY,
							FFT_O, FFT_D, FFT_C, FFTaxX;